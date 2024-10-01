#include "rclcpp/rclcpp.hpp"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/optimization_result.hpp"

class ResultPrinter : public rclcpp::Node {
public:
    ResultPrinter()
        : Node("result_printer") {
        subscription_ = this->create_subscription<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult>(
            "optimization_results", 10, std::bind(&ResultPrinter::handle_results, this, std::placeholders::_1));

        RCLCPP_INFO(this->get_logger(), "ResultPrinter node started and waiting for messages.");
    }

private:
    void handle_results(const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received optimization results.");
        RCLCPP_INFO(this->get_logger(), "Final Objective Value: %.6f", msg->final_obj_value);
        RCLCPP_INFO(this->get_logger(), "t0: %.2f, tend: %.2f, tf: %.2f, psi0: %.2f", msg->t0, msg->tend, msg->tf, msg->psi0);

        std::string solution_str = "Optimal Solution (x):";
        for (const auto& value : msg->solution_x) {
            solution_str += " " + std::to_string(value);
        }
        RCLCPP_INFO(this->get_logger(), "%s", solution_str.c_str());
    }

    rclcpp::Subscription<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult>::SharedPtr subscription_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ResultPrinter>());
    rclcpp::shutdown();
    return 0;
}

// export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/local/vol00/home/vpetrov/dev/crazyflie_opt/ros_auv_v1_sub_l1_bebot_cpp/build/ros_auv_v1_sub_l1_bebot_cpp
// export LD_LIBRARY_PATH=/usr/local/lib/x86_64-linux-gnu:$LD_LIBRARY_PATH
// source install/setup.bash
// ros2 run ros_auv_v1_sub_l1_bebot_cpp printing_node