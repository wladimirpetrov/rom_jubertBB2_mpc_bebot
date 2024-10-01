#include "rclcpp/rclcpp.hpp"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/optimization_parameters.hpp"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/optimization_status.hpp"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/l1_adaptive_msg.hpp"
#include "state_space_matrices.h"
#include <chrono>
#include <vector>

using namespace std::chrono_literals;

class ParameterPublisher : public rclcpp::Node {
public:
    ParameterPublisher()
        : Node("parameter_publisher"),
          subscriber_ready_(true) {

        publisher_ = this->create_publisher<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters>(
            "optimization_parameters", 10);
        status_subscription_ = this->create_subscription<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus>(
            "optimization_status", 10, std::bind(&ParameterPublisher::handle_status, this, std::placeholders::_1));
        l1_adaptive_subscription_ = this->create_subscription<ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg>(
            "l1_adaptive_msg", 10, std::bind(&ParameterPublisher::l1_adaptive_callback, this, std::placeholders::_1));
    }

private:
    void l1_adaptive_callback(const ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg::SharedPtr msg) {
        auto message = ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters();
        message.n = 10;
        message.tf = msg->tf;
        message.delta_v_max = 30.0;
        message.delta_v_min = -30.0;
        message.delta_s_max = 30.0;
        message.delta_s_min = -30.0;
        message.delta_m_max = 4000.0;
        message.delta_m_min = -4000.0;
        message.zmax = 0.0;
        message.zmin = -150.0;
        message.wmax = 5.0;
        message.wmin = -5.0;
        message.thetamax = 0.5;
        message.thetamin = -0.5;
        message.qmax = 5.0;
        message.qmin = -5.0;
        message.z0 = msg->z_act;
        message.w0 = msg->w_act;
        message.theta0 = msg->pitch_act;
        message.q0 = msg->q_act;
        message.delta_v0 = msg->delta_v_act;
        message.delta_m0 = msg->delta_m_act;
        message.delta_s0 = msg->delta_s_act;
        message.zf = msg->y_aug;
        message.thetaf = msg->thetaend;
        message.t0 = msg->t0;
        message.tend = msg->tend;
        message.psi0 = msg->yaw_act;

        std::vector<double> a_flat, b_flat;
        getStateSpaceMatrices(msg->u_act, a_flat, b_flat);  
        message.a_flat = a_flat;
        message.b_flat = b_flat;

        RCLCPP_INFO(this->get_logger(), "Publishing optimization parameters:");
        RCLCPP_INFO(this->get_logger(), "n: %d, tf: %.2f, delta_v_max: %.2f, delta_v_min: %.2f, delta_s_max: %.2f, delta_s_min: %.2f, delta_m_max: %.2f, delta_m_min: %.2f, zmax: %.2f, zmin: %.2f, wmax: %.2f, wmin: %.2f, thetamax: %.2f, thetamin: %.2f, qmax: %.2f, qmin: %.2f, z0: %.2f, w0: %.2f, theta0: %.2f, q0: %.2f, delta_v0: %.2f, delta_s0: %.2f, delta_m0: %.2f, zf: %.2f, thetaf: %.2f, t0: %.2f, tend: %.2f, psi0: %.2f",
                     message.n, message.tf, message.delta_v_max, message.delta_v_min, message.delta_s_max, message.delta_s_min, message.delta_m_max, message.delta_m_min, message.zmax, message.zmin, message.wmax, message.wmin, message.thetamax, message.thetamin, message.qmax, message.qmin, message.z0, message.w0, message.theta0, message.q0, message.delta_v0, message.delta_s0, message.delta_m0, message.zf, message.thetaf, message.t0, message.tend, message.psi0);
        
        std::string a_flat_str = "a_flat:";
        for (const auto& value : message.a_flat) {
            a_flat_str += " " + std::to_string(value);
        }
        RCLCPP_INFO(this->get_logger(), "%s", a_flat_str.c_str());

        std::string b_flat_str = "b_flat:";
        for (const auto& value : message.b_flat) {
            b_flat_str += " " + std::to_string(value);
        }
        RCLCPP_INFO(this->get_logger(), "%s", b_flat_str.c_str());

        publisher_->publish(message);
    }

    void handle_status(const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus::SharedPtr msg) {
        subscriber_ready_ = msg->ready;
        if (subscriber_ready_) {
            RCLCPP_INFO(this->get_logger(), "Subscriber is ready.");
        } else {
            RCLCPP_INFO(this->get_logger(), "Subscriber is busy.");
        }
    }

    rclcpp::Publisher<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters>::SharedPtr publisher_;
    rclcpp::Subscription<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus>::SharedPtr status_subscription_;
    rclcpp::Subscription<ros_auv_v1_sub_l1_bebot_cpp::msg::L1AdaptiveMsg>::SharedPtr l1_adaptive_subscription_;

    bool subscriber_ready_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ParameterPublisher>());
    rclcpp::shutdown();
    return 0;
}


// export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/local/vol00/home/vpetrov/dev/crazyflie_opt/ros_auv_v1_sub_l1_bebot_cpp/build/ros_auv_v1_sub_l1_bebot_cpp
// colcon build --packages-select ros_auv_v1_sub_l1_bebot_cpp --cmake-clean-cache
// source install/setup.bash
// ros2 run ros_auv_v1_sub_l1_bebot_cpp publisher_node
