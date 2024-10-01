#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/optimization_result.hpp"
#include "decasteljau.h"
#include <vector>
#include <tuple>

using namespace std::chrono_literals;
using Matrix = std::vector<std::vector<double>>;

class BufferNode : public rclcpp::Node {
public:
    BufferNode()
        : Node("buffer_node"), t0_c(0.0), tused_c(0.0), psi0_c(0.0), tf_c(100.0), tend_c(100.0),
          Ts(0.05), psierr_prev(0.0), psierrint_prev(0.0), optimization_received(false) {

        t0_subscription_ = this->create_subscription<std_msgs::msg::Float64>(
            "/t0", rclcpp::SensorDataQoS(), std::bind(&BufferNode::t0_callback, this, std::placeholders::_1));
        yaw_act_subscription_ = this->create_subscription<std_msgs::msg::Float64>(
            "/yaw_act", rclcpp::SensorDataQoS(), std::bind(&BufferNode::yaw_act_callback, this, std::placeholders::_1));
        tf_subscription_ = this->create_subscription<std_msgs::msg::Float64>(
            "/tf", rclcpp::SensorDataQoS(), std::bind(&BufferNode::tf_callback, this, std::placeholders::_1));
        tend_subscription_ = this->create_subscription<std_msgs::msg::Float64>(
            "/tend", rclcpp::SensorDataQoS(), std::bind(&BufferNode::tend_callback, this, std::placeholders::_1));

        optimization_subscription_ = this->create_subscription<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult>(
            "optimization_results", 10, std::bind(&BufferNode::optimization_callback, this, std::placeholders::_1));

        delta_v_publisher_ = this->create_publisher<std_msgs::msg::Float64>("/delta_v_current", 10);
        delta_m_publisher_ = this->create_publisher<std_msgs::msg::Float64>("/delta_m_current", 10);
        delta_s_publisher_ = this->create_publisher<std_msgs::msg::Float64>("/delta_s_current", 10);
        delta_h_publisher_ = this->create_publisher<std_msgs::msg::Float64>("/delta_h_current", 10);

        RCLCPP_INFO(this->get_logger(), "BufferNode started.");
    }

private:
    void t0_callback(const std_msgs::msg::Float64::SharedPtr msg) {
        tused_c = msg->data;
        RCLCPP_INFO(this->get_logger(), "Received t0: %.2f", tused_c);
        process_data();
    }

    void yaw_act_callback(const std_msgs::msg::Float64::SharedPtr msg) {
        psi0_c = msg->data;
        RCLCPP_INFO(this->get_logger(), "Received yaw_act (psi0): %.2f", psi0_c);
        //process_data();
    }

    void tf_callback(const std_msgs::msg::Float64::SharedPtr msg) {
        tf_c = msg->data;
        RCLCPP_INFO(this->get_logger(), "Received tf: %.2f", tf_c);
        //process_data();
    }

    void tend_callback(const std_msgs::msg::Float64::SharedPtr msg) {
        tend_c = msg->data;
        RCLCPP_INFO(this->get_logger(), "Received tend: %.2f", tend_c);
        //process_data();
    }

    void optimization_callback(const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult::SharedPtr msg) {
        optimization_received = true;

        int n = (msg->solution_x.size() / 7) - 1;
        delta_v_vector.assign(msg->solution_x.begin() + 4 * (n + 1), msg->solution_x.begin() + 5 * (n + 1));
        delta_m_vector.assign(msg->solution_x.begin() + 5 * (n + 1), msg->solution_x.begin() + 6 * (n + 1));
        delta_s_vector.assign(msg->solution_x.begin() + 6 * (n + 1), msg->solution_x.end());

        t0_c = msg->t0;
        tf_c = msg->tf;
        tend_c = msg->tend;
        psi0_c = msg->psi0;

        RCLCPP_INFO(this->get_logger(), "Received Optimization Results: t0=%.2f, tf=%.2f, tend=%.2f, psi0=%.2f", t0_c, tf_c, tend_c, psi0_c);
        RCLCPP_INFO(this->get_logger(), "Vectors received: delta_v_vector size=%zu, delta_s_vector size=%zu, delta_m_vector size=%zu",
                    delta_v_vector.size(), delta_m_vector.size(), delta_s_vector.size());

        //process_data();
    }

    void process_data() {
        if (optimization_received) {
            RCLCPP_INFO(this->get_logger(), "Scenario 2: Optimization results received.");
            compute_all_deltas();
        } else {
            RCLCPP_INFO(this->get_logger(), "Scenario 1: No Optimization Results Received Yet.");
            compute_delta_h_only();
        }
    }

    void compute_all_deltas() {
        RCLCPP_INFO(this->get_logger(), "t0_c: %.2f, tused_c: %.2f, tf_c: %.2f, tend_c: %.2f", t0_c, tused_c, tf_c, tend_c);
        double lambda = ((tused_c + tf_c) - (t0_c + tf_c)) / tf_c;

        Matrix Cp = { delta_v_vector, delta_m_vector, delta_s_vector };

        std::vector<double> delta_v_current, delta_s_current, delta_m_current;
        std::tie(std::ignore, std::ignore, delta_v_current) = deCasteljau({delta_v_vector}, lambda);
        std::tie(std::ignore, std::ignore, delta_m_current) = deCasteljau({delta_m_vector}, lambda);
        std::tie(std::ignore, std::ignore, delta_s_current) = deCasteljau({delta_s_vector}, lambda);

        RCLCPP_INFO(this->get_logger(), "Computed delta_v_current: %.2f", delta_v_current[0]);
        RCLCPP_INFO(this->get_logger(), "Computed delta_m_current: %.2f", delta_m_current[0]);
        RCLCPP_INFO(this->get_logger(), "Computed delta_s_current: %.2f", delta_s_current[0]);

        std_msgs::msg::Float64 msg_delta_v;
        msg_delta_v.data = delta_v_current[0];
        delta_v_publisher_->publish(msg_delta_v);

        std_msgs::msg::Float64 msg_delta_s;
        msg_delta_s.data = delta_s_current[0];
        delta_s_publisher_->publish(msg_delta_s);

        std_msgs::msg::Float64 msg_delta_m;
        msg_delta_m.data = delta_m_current[0];
        delta_m_publisher_->publish(msg_delta_m);

        compute_and_publish_delta_h();
    }

    void compute_delta_h_only() {
        std_msgs::msg::Float64 msg_delta_v;
        msg_delta_v.data = 0.0;
        delta_v_publisher_->publish(msg_delta_v);

        std_msgs::msg::Float64 msg_delta_m;
        msg_delta_m.data = 0.0;
        delta_m_publisher_->publish(msg_delta_m);

        std_msgs::msg::Float64 msg_delta_s;
        msg_delta_s.data = 0.0;
        delta_s_publisher_->publish(msg_delta_s);

        

        compute_and_publish_delta_h();
    }

    void compute_and_publish_delta_h() {
        double KP_APpsi = 3.0;
        double KI_APpsi = 0.0;
        double KD_APpsi = 12.199;
        double psierr = psi_ref - psi0_c;
        double psierrint = psierr * Ts + psierrint_prev;

        RCLCPP_INFO(this->get_logger(), "psierr: %.2f, psierr_prev: %.2f", psierr, psierr_prev);
        
        double psierrdot = (psierr - psierr_prev) / Ts;
        double delta_h_current = KP_APpsi * psierr + KI_APpsi * psierrint + KD_APpsi * psierrdot;

        RCLCPP_INFO(this->get_logger(), "Computed delta_h_current: %.2f", delta_h_current);

        psierr_prev = psierr;
        psierrint_prev = psierrint;

        std_msgs::msg::Float64 msg_delta_h;
        msg_delta_h.data = delta_h_current;
        delta_h_publisher_->publish(msg_delta_h);
    }

    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr t0_subscription_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr yaw_act_subscription_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr tf_subscription_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr tend_subscription_;
    rclcpp::Subscription<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult>::SharedPtr optimization_subscription_;

    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr delta_v_publisher_;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr delta_m_publisher_;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr delta_s_publisher_;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr delta_h_publisher_;

    double t0_c, tused_c, psi0_c, tf_c, tend_c;
    const double Ts;
    double psierr_prev;
    double psierrint_prev;
    bool optimization_received;

    std::vector<double> delta_v_vector, delta_m_vector, delta_s_vector;
    const double psi_ref = 0.0;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<BufferNode>());
    rclcpp::shutdown();
    return 0;
}


// export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/local/vol00/home/vpetrov/dev/crazyflie_opt/ros_auv_v1_sub_l1_bebot_cpp/build/ros_auv_v1_sub_l1_bebot_cpp
// export LD_LIBRARY_PATH=/usr/local/lib/x86_64-linux-gnu:$LD_LIBRARY_PATH
// source install/setup.bash
// ros2 run ros_auv_v1_sub_l1_bebot_cpp buffer_node