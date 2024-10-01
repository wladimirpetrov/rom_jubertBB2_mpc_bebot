#include "rclcpp/rclcpp.hpp"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/optimization_parameters.hpp"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/optimization_result.hpp"
#include "ros_auv_v1_sub_l1_bebot_cpp/msg/optimization_status.hpp"
#include <dlfcn.h>
#include <vector>
#include <stdexcept>
#include <memory>

class PointSetProblem;

typedef PointSetProblem* (*CreateProblemFunc)(int, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double);
typedef void (*SolveProblemFunc)(PointSetProblem*);
typedef void (*GetSolutionFunc)(PointSetProblem*, double*, int);
typedef double (*GetFinalObjectiveValueFunc)(PointSetProblem*);
typedef void (*DestroyProblemFunc)(PointSetProblem*);

class ParameterSubscriber : public rclcpp::Node {
public:
    ParameterSubscriber()
        : Node("parameter_subscriber"), library_handle_(nullptr), problem_(nullptr) {
        subscription_ = this->create_subscription<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters>(
            "optimization_parameters", 10, std::bind(&ParameterSubscriber::handle_parameters, this, std::placeholders::_1));
        result_publisher_ = this->create_publisher<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult>("optimization_results", 10);
        status_publisher_ = this->create_publisher<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus>("optimization_status", 10);

        RCLCPP_INFO(this->get_logger(), "ParameterSubscriber node started");

        
        library_handle_ = dlopen("/home/vpetrov/dev/crazyflie_opt/ros_auv_v1_sub_l1_bebot_cpp/libbebot_mpc_auv_v1.so", RTLD_LAZY);
        if (!library_handle_) {
            RCLCPP_ERROR(this->get_logger(), "Cannot open library: %s", dlerror());
            throw std::runtime_error("Failed to open library");
        }
        RCLCPP_INFO(this->get_logger(), "Library loaded successfully");

        
        create_problem_ = (CreateProblemFunc)dlsym(library_handle_, "create_point_set_problem");
        solve_problem_ = (SolveProblemFunc)dlsym(library_handle_, "solve_point_set_problem");
        get_solution_ = (GetSolutionFunc)dlsym(library_handle_, "get_solution");
        get_final_objective_value_ = (GetFinalObjectiveValueFunc)dlsym(library_handle_, "get_final_objective_value");
        destroy_problem_ = (DestroyProblemFunc)dlsym(library_handle_, "destroy_point_set_problem");

        if (!create_problem_ || !solve_problem_ || !get_solution_ || !get_final_objective_value_ || !destroy_problem_) {
            RCLCPP_ERROR(this->get_logger(), "Cannot load symbols: %s", dlerror());
            dlclose(library_handle_);
            throw std::runtime_error("Failed to load symbols");
        }

        RCLCPP_INFO(this->get_logger(), "Symbols loaded successfully");

        
        publish_status(true);
    }

    ~ParameterSubscriber() {
        RCLCPP_INFO(this->get_logger(), "Destroying problem and closing library");
        if (problem_) {
            destroy_problem_(problem_);
        }
        if (library_handle_) {
            dlclose(library_handle_);
        }
    }

private:
    void handle_parameters(const ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received parameters: n=%d, tf=%.2f, delta_v_max=%.2f, delta_v_min=%.2f, delta_s_max=%.2f, delta_s_min=%.2f, delta_m_max=%.2f, delta_m_min=%.2f, zmax=%.2f, zmin=%.2f, wmax=%.2f, wmin=%.2f, thetamax=%.2f, thetamin=%.2f, qmax=%.2f, qmin=%.2f, z0=%.2f, w0=%.2f, theta0=%.2f, q0=%.2f, delta_v0=%.2f, delta_s0=%.2f, delta_m0=%.2f, zf=%.2f, thetaf=%.2f, t0=%.2f, tend=%.2f, psi0=%.2f",
                    msg->n, msg->tf, msg->delta_v_max, msg->delta_v_min, msg->delta_s_max, msg->delta_s_min, msg->delta_m_max, msg->delta_m_min, msg->zmax, msg->zmin, msg->wmax, msg->wmin, msg->thetamax, msg->thetamin, msg->qmax, msg->qmin, msg->z0, msg->w0, msg->theta0, msg->q0, msg->delta_v0, msg->delta_m0, msg->delta_s0, msg->zf, msg->thetaf, msg->t0, msg->tend, msg->psi0);

        // status busy
        publish_status(false);

        
        if (problem_) {
            RCLCPP_INFO(this->get_logger(), "Destroying previous problem instance");
        }

        
        RCLCPP_INFO(this->get_logger(), "Creating new problem instance");
        problem_ = create_problem_(msg->n, msg->tf, msg->delta_v_max, msg->delta_v_min, msg->delta_s_max, msg->delta_s_min, msg->delta_m_max, msg->delta_m_min, msg->zmax, msg->zmin, msg->wmax, msg->wmin, msg->thetamax, msg->thetamin, msg->qmax, msg->qmin, msg->z0, msg->w0, msg->theta0, msg->q0, msg->delta_v0, msg->delta_m0, msg->delta_s0, msg->zf, msg->thetaf, 
            msg->a_flat[0], msg->a_flat[1], msg->a_flat[2], msg->a_flat[3], msg->a_flat[4], msg->a_flat[5], msg->a_flat[6], msg->a_flat[7], msg->a_flat[8], msg->a_flat[9], msg->a_flat[10], msg->a_flat[11], msg->a_flat[12], msg->a_flat[13], msg->a_flat[14], msg->a_flat[15], 
            msg->b_flat[0], msg->b_flat[1], msg->b_flat[2], msg->b_flat[3], msg->b_flat[4], msg->b_flat[5], msg->b_flat[6], msg->b_flat[7], msg->b_flat[8], msg->b_flat[9], msg->b_flat[10], msg->b_flat[11], msg->t0, msg->tend, msg->psi0);

        if (!problem_) {
            RCLCPP_ERROR(this->get_logger(), "Failed to create problem instance");
            publish_status(true);  
            return;
        }

        RCLCPP_INFO(this->get_logger(), "Solving the problem");
        solve_problem_(problem_);

        RCLCPP_INFO(this->get_logger(), "Getting solution from the problem");
        int solution_size = 7 * (msg->n + 1);
        std::vector<double> solution(solution_size);
        get_solution_(problem_, solution.data(), solution_size);

        RCLCPP_INFO(this->get_logger(), "Getting final objective value from the problem");
        double final_obj_value = get_final_objective_value_(problem_);

        RCLCPP_INFO(this->get_logger(), "Publishing the result");
        auto result_msg = ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult();
        result_msg.solution_x = solution;
        result_msg.final_obj_value = final_obj_value;
        result_msg.t0 = msg->t0;
        result_msg.tend = msg->tend;
        result_msg.tf = msg->tf;
        result_msg.psi0 = msg->psi0;
        result_publisher_->publish(result_msg);

        RCLCPP_INFO(this->get_logger(), "Results published successfully");

        // status ready
        publish_status(true);
    }

    void publish_status(bool ready) {
        auto status_msg = ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus();
        status_msg.ready = ready;
        status_publisher_->publish(status_msg);
    }

    rclcpp::Subscription<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationParameters>::SharedPtr subscription_;
    rclcpp::Publisher<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationResult>::SharedPtr result_publisher_;
    rclcpp::Publisher<ros_auv_v1_sub_l1_bebot_cpp::msg::OptimizationStatus>::SharedPtr status_publisher_;
    void* library_handle_;
    PointSetProblem* problem_;
    CreateProblemFunc create_problem_;
    SolveProblemFunc solve_problem_;
    GetSolutionFunc get_solution_;
    GetFinalObjectiveValueFunc get_final_objective_value_;
    DestroyProblemFunc destroy_problem_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ParameterSubscriber>());
    rclcpp::shutdown();
    return 0;
}

// export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/local/vol00/home/vpetrov/dev/crazyflie_opt/ros_auv_v1_sub_l1_bebot_cpp/build/ros_auv_v1_sub_l1_bebot_cpp
// export LD_LIBRARY_PATH=/usr/local/lib/x86_64-linux-gnu:$LD_LIBRARY_PATH
// source install/setup.bash
// ros2 run ros_auv_v1_sub_l1_bebot_cpp subscriber_node