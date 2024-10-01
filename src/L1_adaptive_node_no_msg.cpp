#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"
#include "control_systems.h"
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
#include "mkl.h"

void matrix_exponential(const std::vector<double>& matrix, std::vector<double>& result, int size) {
    int accuracy = 10;

    // Scaling
    int N = 4;
    std::vector<double> M_small(size * size);
    for (int i = 0; i < size * size; i++) M_small[i] = matrix[i] / pow(2.0, static_cast<double>(N));

    // Exp part
    std::vector<double> m_exp(size * size, 0.0);
    std::vector<double> m_exp1(size * size, 0.0);
    std::vector<double> m_exp2(size * size, 0.0);
    for (int i = 0; i < size; i++) m_exp[i * size + i] = 1.0;

    std::vector<double> M_power(size * size);
    std::vector<double> M_power1(size * size);
    cblas_dcopy(size * size, M_small.data(), 1, M_power.data(), 1);

    std::vector<double> tmpM1(size * size);

    double factorial_i = 1.0;
    for (int i = 1; i < accuracy; i++) {
        factorial_i = factorial_i * i;

        for (int x = 0; x < size * size; x++) tmpM1[x] = M_power[x] / factorial_i;
        vdAdd(size * size, m_exp.data(), tmpM1.data(), m_exp.data());

        cblas_dcopy(size * size, M_power.data(), 1, M_power1.data(), 1);
        cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, size, size, size, 1.0, M_power1.data(), size, M_small.data(), size, 0.0, M_power.data(), size);
    }

    // Squaring step
    for (int i = 0; i < N; i++) {
        cblas_dcopy(size * size, m_exp.data(), 1, m_exp1.data(), 1);
        cblas_dcopy(size * size, m_exp.data(), 1, m_exp2.data(), 1);
        cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, size, size, size, 1.0, m_exp1.data(), size, m_exp2.data(), size, 0.0, m_exp.data(), size);
    }

    cblas_dcopy(size * size, m_exp.data(), 1, result.data(), 1);
}

class L1AdaptiveNode : public rclcpp::Node {
public:
    L1AdaptiveNode();

private:
    void xActCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void yActCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void zActCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void rollActCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void pitchActCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void yawActCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void uActCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void vActCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void wActCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void pActCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void qActCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void rActCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void adapCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void zrefCallback(const std_msgs::msg::Float64::SharedPtr msg);

    void computeL1Control();
    void fcn(double y_ref);

    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr x_act_sub_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr y_act_sub_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr z_act_sub_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr roll_act_sub_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr pitch_act_sub_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr yaw_act_sub_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr u_act_sub_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr v_act_sub_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr w_act_sub_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr p_act_sub_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr q_act_sub_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr r_act_sub_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr adap_sub_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr zref_sub_;

    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr y_aug_pub_;

    double x_, y_, z_, roll_, pitch_, yaw_;
    double uN_, vN_, wN_, pB_, qB_, rB_;
    double y_ref_; // Reference value from /zref topic
    bool adap_;
    double Ts_;
    ControlSystems control_systems_;
    std::vector<double> xu_, xd_;
    bool initialized_; // Flag to check if initialization has been done
};

L1AdaptiveNode::L1AdaptiveNode()
    : Node("L1_adaptive_node"), x_(0), y_(0), z_(-20), roll_(0), pitch_(0), yaw_(0),
      uN_(0), vN_(0), wN_(0), pB_(0), qB_(0), rB_(0), y_ref_(0), adap_(true), Ts_(0.05),
      control_systems_(Ts_), xu_(3, 0.0), xd_(2, 0.0), initialized_(false) {

    x_act_sub_ = this->create_subscription<std_msgs::msg::Float64>("/x_act", 10, std::bind(&L1AdaptiveNode::xActCallback, this, std::placeholders::_1));
    y_act_sub_ = this->create_subscription<std_msgs::msg::Float64>("/y_act", 10, std::bind(&L1AdaptiveNode::yActCallback, this, std::placeholders::_1));
    z_act_sub_ = this->create_subscription<std_msgs::msg::Float64>("/z_act", 10, std::bind(&L1AdaptiveNode::zActCallback, this, std::placeholders::_1));
    roll_act_sub_ = this->create_subscription<std_msgs::msg::Float64>("/roll_act", 10, std::bind(&L1AdaptiveNode::rollActCallback, this, std::placeholders::_1));
    pitch_act_sub_ = this->create_subscription<std_msgs::msg::Float64>("/pitch_act", 10, std::bind(&L1AdaptiveNode::pitchActCallback, this, std::placeholders::_1));
    yaw_act_sub_ = this->create_subscription<std_msgs::msg::Float64>("/yaw_act", 10, std::bind(&L1AdaptiveNode::yawActCallback, this, std::placeholders::_1));
    u_act_sub_ = this->create_subscription<std_msgs::msg::Float64>("/u_act", 10, std::bind(&L1AdaptiveNode::uActCallback, this, std::placeholders::_1));
    v_act_sub_ = this->create_subscription<std_msgs::msg::Float64>("/v_act", 10, std::bind(&L1AdaptiveNode::vActCallback, this, std::placeholders::_1));
    w_act_sub_ = this->create_subscription<std_msgs::msg::Float64>("/w_act", 10, std::bind(&L1AdaptiveNode::wActCallback, this, std::placeholders::_1));
    p_act_sub_ = this->create_subscription<std_msgs::msg::Float64>("/p_act", 10, std::bind(&L1AdaptiveNode::pActCallback, this, std::placeholders::_1));
    q_act_sub_ = this->create_subscription<std_msgs::msg::Float64>("/q_act", 10, std::bind(&L1AdaptiveNode::qActCallback, this, std::placeholders::_1));
    r_act_sub_ = this->create_subscription<std_msgs::msg::Float64>("/r_act", 10, std::bind(&L1AdaptiveNode::rActCallback, this, std::placeholders::_1));
    adap_sub_ = this->create_subscription<std_msgs::msg::Float64>("/adap", 10, std::bind(&L1AdaptiveNode::adapCallback, this, std::placeholders::_1));
    zref_sub_ = this->create_subscription<std_msgs::msg::Float64>("/zref", 10, std::bind(&L1AdaptiveNode::zrefCallback, this, std::placeholders::_1));

    y_aug_pub_ = this->create_publisher<std_msgs::msg::Float64>("y_aug", 10);

    control_systems_.computeDepthSystem();
    control_systems_.computeYawSystem();
}

void L1AdaptiveNode::xActCallback(const std_msgs::msg::Float64::SharedPtr msg) {
    x_ = msg->data;
    RCLCPP_INFO(this->get_logger(), "Received x_act: %f", x_);
}

void L1AdaptiveNode::yActCallback(const std_msgs::msg::Float64::SharedPtr msg) {
    y_ = msg->data;
    RCLCPP_INFO(this->get_logger(), "Received y_act: %f", y_);
}

void L1AdaptiveNode::zActCallback(const std_msgs::msg::Float64::SharedPtr msg) {
    z_ = msg->data;
    RCLCPP_INFO(this->get_logger(), "Received z_act: %f", z_);
    computeL1Control();
}

void L1AdaptiveNode::rollActCallback(const std_msgs::msg::Float64::SharedPtr msg) {
    roll_ = msg->data;
    RCLCPP_INFO(this->get_logger(), "Received roll_act: %f", roll_);
}

void L1AdaptiveNode::pitchActCallback(const std_msgs::msg::Float64::SharedPtr msg) {
    pitch_ = msg->data;
    RCLCPP_INFO(this->get_logger(), "Received pitch_act: %f", pitch_);
}

void L1AdaptiveNode::yawActCallback(const std_msgs::msg::Float64::SharedPtr msg) {
    yaw_ = msg->data;
    RCLCPP_INFO(this->get_logger(), "Received yaw_act: %f", yaw_);
}

void L1AdaptiveNode::uActCallback(const std_msgs::msg::Float64::SharedPtr msg) {
    uN_ = msg->data;
    RCLCPP_INFO(this->get_logger(), "Received u_act: %f", uN_);
}

void L1AdaptiveNode::vActCallback(const std_msgs::msg::Float64::SharedPtr msg) {
    vN_ = msg->data;
    RCLCPP_INFO(this->get_logger(), "Received v_act: %f", vN_);
}

void L1AdaptiveNode::wActCallback(const std_msgs::msg::Float64::SharedPtr msg) {
    wN_ = msg->data;
    RCLCPP_INFO(this->get_logger(), "Received w_act: %f", wN_);
}

void L1AdaptiveNode::pActCallback(const std_msgs::msg::Float64::SharedPtr msg) {
    pB_ = msg->data;
    RCLCPP_INFO(this->get_logger(), "Received p_act: %f", pB_);
}

void L1AdaptiveNode::qActCallback(const std_msgs::msg::Float64::SharedPtr msg) {
    qB_ = msg->data;
    RCLCPP_INFO(this->get_logger(), "Received q_act: %f", qB_);
}

void L1AdaptiveNode::rActCallback(const std_msgs::msg::Float64::SharedPtr msg) {
    rB_ = msg->data;
    RCLCPP_INFO(this->get_logger(), "Received r_act: %f", rB_);
}

void L1AdaptiveNode::adapCallback(const std_msgs::msg::Float64::SharedPtr msg) {
    adap_ = msg->data == 1.0;
    RCLCPP_INFO(this->get_logger(), "Received adap: %f", msg->data);
}

void L1AdaptiveNode::zrefCallback(const std_msgs::msg::Float64::SharedPtr msg) {
    y_ref_ = msg->data;
    RCLCPP_INFO(this->get_logger(), "Received zref: %f", y_ref_);
}

void L1AdaptiveNode::computeL1Control() {
    // Adaptation logic
    if (!initialized_) {
        // Initialize xu_ and xd_
        const L1Struct& L1 = control_systems_.getL1();
        std::vector<double> Cm(L1.Cmz.begin(), L1.Cmz.end());
        double y = z_;
        double CmCmT = Cm[0] * Cm[0] + Cm[1] * Cm[1];
        double invCmCmT = 1.0 / CmCmT;
        double invCmCmT_y = invCmCmT * y;
        std::vector<double> CmTinvCmCm = {Cm[0] * invCmCmT_y, Cm[1] * invCmCmT_y};
        xu_ = std::vector<double>(3, 0.0);
        xd_ = CmTinvCmCm;
        initialized_ = true;
        RCLCPP_INFO(this->get_logger(), "Initialized xu_: ");
        for (const auto& val : xu_) std::cout << val << " ";
        std::cout << std::endl;

        RCLCPP_INFO(this->get_logger(), "Initialized xd_: ");
        for (const auto& val : xd_) std::cout << val << " ";
        std::cout << std::endl;
    }
    fcn(y_ref_);
}

void L1AdaptiveNode::fcn(double y_ref) {
    const L1Struct& L1 = control_systems_.getL1();

    // Control Parameters
    std::vector<double> Am(L1.Amz.begin(), L1.Amz.end());
    std::vector<double> Am2(L1.Amz.begin(), L1.Amz.end());
    std::vector<double> Bm(L1.Bmz.begin(), L1.Bmz.end());
    std::vector<double> Cm(L1.Cmz.begin(), L1.Cmz.end());
    std::vector<double> Phiinv(L1.Phiinvz.begin(), L1.Phiinvz.end());
    std::vector<double> Lambda(L1.Lambdaz.begin(), L1.Lambdaz.end());
    std::vector<double> Ao(L1.Aoz.begin(), L1.Aoz.end());
    std::vector<double> Bo(L1.Boz.begin(), L1.Boz.end());
    std::vector<double> Co(L1.Coz.begin(), L1.Coz.end());

    // Print the extracted matrices
    RCLCPP_INFO(this->get_logger(), "Am: ");
    for (const auto& val : Am) std::cout << val << " ";
    std::cout << std::endl;

    RCLCPP_INFO(this->get_logger(), "Bm: ");
    for (const auto& val : Bm) std::cout << val << " ";
    std::cout << std::endl;

    RCLCPP_INFO(this->get_logger(), "Cm: ");
    for (const auto& val : Cm) std::cout << val << " ";
    std::cout << std::endl;

    RCLCPP_INFO(this->get_logger(), "Phiinv: ");
    for (const auto& val : Phiinv) std::cout << val << " ";
    std::cout << std::endl;

    RCLCPP_INFO(this->get_logger(), "Lambda: ");
    for (const auto& val : Lambda) std::cout << val << " ";
    std::cout << std::endl;

    RCLCPP_INFO(this->get_logger(), "Ao: ");
    for (const auto& val : Ao) std::cout << val << " ";
    std::cout << std::endl;

    RCLCPP_INFO(this->get_logger(), "Bo: ");
    for (const auto& val : Bo) std::cout << val << " ";
    std::cout << std::endl;

    RCLCPP_INFO(this->get_logger(), "Co: ");
    for (const auto& val : Co) std::cout << val << " ";
    std::cout << std::endl;

    // Output Definition
    double y = z_;
    RCLCPP_INFO(this->get_logger(), "y (z_): %f", y);

    std::vector<double> xu_next = xu_;
    std::vector<double> xd_next = xd_;

    if (adap_) {
        // Step 1: Multiply Cm by xd
        double yd = Cm[0] * xd_[0] + Cm[1] * xd_[1];
        RCLCPP_INFO(this->get_logger(), "yd (Cm * xd): %f", yd);

        // Step 2: Construct vec1
        size_t size_Bm_col = Bm.size(); // Number of columns in Bm
        size_t size_Am_row = Am.size() / size_Bm_col; // Number of rows in Am
        std::vector<double> vec1(size_Am_row, 0.0);
        vec1[0] = 1.0;
        RCLCPP_INFO(this->get_logger(), "vec1: ");
        for (const auto& val : vec1) std::cout << val << " ";
        std::cout << std::endl;

        // Step 3: Compute Am * Lambda^(-1)
        std::vector<double> Lambda_inv = Lambda;
        std::vector<int> ipiv_Lambda(2);
        LAPACKE_dgetrf(LAPACK_ROW_MAJOR, 2, 2, Lambda_inv.data(), 2, ipiv_Lambda.data());
        LAPACKE_dgetri(LAPACK_ROW_MAJOR, 2, Lambda_inv.data(), 2, ipiv_Lambda.data());

        std::vector<double> Am_div_Lambda(4);
        cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, 2, 2, 2, 1.0, Am.data(), 2, Lambda_inv.data(), 2, 0.0, Am_div_Lambda.data(), 2);

        RCLCPP_INFO(this->get_logger(), "Am * Lambda^(-1): ");
        for (const auto& val : Am_div_Lambda) std::cout << val << " ";
        std::cout << std::endl;

        // Step 4: Compute Lambda*(Am/Lambda)
        std::vector<double> Lambda_Am_div_Lambda(4);
        cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, 2, 2, 2, 1.0, Lambda.data(), 2, Am_div_Lambda.data(), 2, 0.0, Lambda_Am_div_Lambda.data(), 2);

        RCLCPP_INFO(this->get_logger(), "Lambda * (Am * Lambda^(-1)): ");
        for (const auto& val : Lambda_Am_div_Lambda) std::cout << val << " ";
        std::cout << std::endl;

        // Step 5: Compute Lambda*(Am/Lambda)*Ts
        std::vector<double> Lambda_Am_div_Lambda_Ts = Lambda_Am_div_Lambda;
        for (auto& val : Lambda_Am_div_Lambda_Ts) {
            val *= Ts_;
        }

        RCLCPP_INFO(this->get_logger(), "Lambda * (Am / Lambda) * Ts: ");
        for (const auto& val : Lambda_Am_div_Lambda_Ts) std::cout << val << " ";
        std::cout << std::endl;

        // Step 6: Compute expm(Lambda*(Am/Lambda)*Ts)
        std::vector<double> expm_Lambda_Am_div_Lambda_Ts(Lambda_Am_div_Lambda_Ts.size());
        matrix_exponential(Lambda_Am_div_Lambda_Ts, expm_Lambda_Am_div_Lambda_Ts, 2);

        RCLCPP_INFO(this->get_logger(), "expm(Lambda * (Am / Lambda) * Ts): ");
        for (const auto& val : expm_Lambda_Am_div_Lambda_Ts) std::cout << val << " ";
        std::cout << std::endl;

        // Step 7: Compute yd - y
        double yd_minus_y = yd - y;
        RCLCPP_INFO(this->get_logger(), "yd - y: %f", yd_minus_y);

        // Step 8: Compute vec1 * (yd - y)
        std::vector<double> vec1_yd_minus_y(vec1.size());
        for (size_t i = 0; i < vec1.size(); ++i) {
            vec1_yd_minus_y[i] = vec1[i] * yd_minus_y;
        }

        RCLCPP_INFO(this->get_logger(), "vec1 * (yd - y): ");
        for (const auto& val : vec1_yd_minus_y) std::cout << val << " ";
        std::cout << std::endl;

        // Step 9: Compute expm(Lambda*(Am/Lambda)*Ts) * vec1 * (yd - y)
        std::vector<double> expm_Lambda_Am_div_Lambda_Ts_vec1(2);
        cblas_dgemv(CblasRowMajor, CblasNoTrans, 2, 2, 1.0, expm_Lambda_Am_div_Lambda_Ts.data(), 2, vec1_yd_minus_y.data(), 1, 0.0, expm_Lambda_Am_div_Lambda_Ts_vec1.data(), 1);

        std::vector<double> sigma(2);
        cblas_dgemv(CblasRowMajor, CblasNoTrans, 2, 2, -1.0, Phiinv.data(), 2, expm_Lambda_Am_div_Lambda_Ts_vec1.data(), 1, 0.0, sigma.data(), 1);

        RCLCPP_INFO(this->get_logger(), "sigma: ");
        for (const auto& val : sigma) std::cout << val << " ";
        std::cout << std::endl;

        // Step 10: Compute expm(Ao*Ts)
        std::vector<double> scaled_Ao = Ao;
        for (auto& val : scaled_Ao) val *= Ts_;
        std::vector<double> expm_Ao_Ts(Ao.size());
        matrix_exponential(scaled_Ao, expm_Ao_Ts, 3);

        RCLCPP_INFO(this->get_logger(), "expm(Ao * Ts): ");
        for (const auto& val : expm_Ao_Ts) std::cout << val << " ";
        std::cout << std::endl;

        // Step 11: Compute inv(Ao)
        std::vector<double> inv_Ao = Ao; // Copy Ao to inv_Ao for in-place inversion
        std::vector<int> ipiv(3);
        LAPACKE_dgetrf(LAPACK_ROW_MAJOR, 3, 3, inv_Ao.data(), 3, ipiv.data());
        LAPACKE_dgetri(LAPACK_ROW_MAJOR, 3, inv_Ao.data(), 3, ipiv.data());

        RCLCPP_INFO(this->get_logger(), "inv(Ao): ");
        for (const auto& val : inv_Ao) std::cout << val << " ";
        std::cout << std::endl;

        // Step 12: Compute (expm(Ao*Ts) - eye(length(Bo)))
        std::vector<double> eye_minus_expm_Ao_Ts(Ao.size());
        for (size_t i = 0; i < Ao.size(); ++i) {
            eye_minus_expm_Ao_Ts[i] = (i % 3 == i / 3) ? expm_Ao_Ts[i] - 1.0 : expm_Ao_Ts[i];
        }

        RCLCPP_INFO(this->get_logger(), "(expm(Ao*Ts) - eye(length(Bo))): ");
        for (const auto& val : eye_minus_expm_Ao_Ts) std::cout << val << " ";
        std::cout << std::endl;

        // Step 13: Compute inv(Ao) * (expm(Ao*Ts) - eye(length(Bo)))
        std::vector<double> inv_Ao_eye_minus_expm_Ao_Ts(eye_minus_expm_Ao_Ts.size());
        cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, 3, 3, 3, 1.0, inv_Ao.data(), 3, eye_minus_expm_Ao_Ts.data(), 3, 0.0, inv_Ao_eye_minus_expm_Ao_Ts.data(), 3);

        RCLCPP_INFO(this->get_logger(), "inv(Ao) * (expm(Ao*Ts) - eye(length(Bo))): ");
        for (const auto& val : inv_Ao_eye_minus_expm_Ao_Ts) std::cout << val << " ";
        std::cout << std::endl;

         // Step 14: Compute Bo * expm(-Am*Ts)
        std::vector<double> scaled_Am = Am;
        for (auto& val : scaled_Am) val *= -Ts_;
        std::vector<double> expm_Am_Ts(Am.size());
        matrix_exponential(scaled_Am, expm_Am_Ts, 2);

        std::vector<double> Bo_expm_Am_Ts(Bo.size());
        cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, 3, 2, 2, 1.0, Bo.data(), 2, expm_Am_Ts.data(), 2, 0.0, Bo_expm_Am_Ts.data(), 2);

        RCLCPP_INFO(this->get_logger(), "Bo * expm(-Am*Ts): ");
        for (const auto& val : Bo_expm_Am_Ts) std::cout << val << " ";
        std::cout << std::endl;

        // Combine Bo * expm(-Am*Ts) with sigma
        std::vector<double> Bo_expm_Am_Ts_sigma(3, 0.0);
        for (size_t i = 0; i < 3; ++i) {
            for (size_t j = 0; j < 2; ++j) {
                Bo_expm_Am_Ts_sigma[i] += Bo_expm_Am_Ts[i * 2 + j] * sigma[j];
            }
        }

        RCLCPP_INFO(this->get_logger(), "Bo * expm(-Am*Ts) * sigma: ");
        for (const auto& val : Bo_expm_Am_Ts_sigma) std::cout << val << " ";
        std::cout << std::endl;

        // Step 15: Compute new xu
        std::vector<double> new_xu(3);

        // Compute expm(Ao*Ts) * xu
        cblas_dgemv(CblasRowMajor, CblasNoTrans, 3, 3, 1.0, expm_Ao_Ts.data(), 3, xu_.data(), 1, 0.0, new_xu.data(), 1);

        // Add inv(Ao) * (expm(Ao*Ts) - eye(length(Bo))) * (Bo * expm(-Am*Ts) * sigma)
        std::vector<double> temp(3);
        cblas_dgemv(CblasRowMajor, CblasNoTrans, 3, 3, 1.0, inv_Ao_eye_minus_expm_Ao_Ts.data(), 3, Bo_expm_Am_Ts_sigma.data(), 1, 0.0, temp.data(), 1);
        cblas_daxpy(3, 1.0, temp.data(), 1, new_xu.data(), 1);

        xu_next = new_xu;

        RCLCPP_INFO(this->get_logger(), "xu_next: ");
        for (const auto& val : xu_next) std::cout << val << " ";
        std::cout << std::endl;

        // Step 16: Compute Kg
        // Compute inv(Am)
        std::vector<double> inv_Am(Am.size());
        std::vector<int> ipiv_Am(2);
        LAPACKE_dgetrf(LAPACK_ROW_MAJOR, 2, 2, Am.data(), 2, ipiv_Am.data());
        LAPACKE_dgetri(LAPACK_ROW_MAJOR, 2, Am.data(), 2, ipiv_Am.data());

        // Print Cm and inv(Am) before multiplication
        RCLCPP_INFO(this->get_logger(), "Cm: ");
        for (const auto& val : Cm) std::cout << val << " ";
        std::cout << std::endl;

        RCLCPP_INFO(this->get_logger(), "inv(Am): ");
        for (const auto& val : Am) std::cout << val << " ";
        std::cout << std::endl;

        // Compute Cm * inv(Am)
        std::vector<double> Cm_inv_Am(Cm.size());
        cblas_dgemv(CblasRowMajor, CblasTrans, 2, 2, 1.0, Am.data(), 2, Cm.data(), 1, 0.0, Cm_inv_Am.data(), 1);

        RCLCPP_INFO(this->get_logger(), "Cm * inv(Am): ");
        for (const auto& val : Cm_inv_Am) std::cout << val << " ";
        std::cout << std::endl;

        // Compute Cm * inv(Am) * Bm
        double Cm_inv_Am_Bm = cblas_ddot(2, Cm_inv_Am.data(), 1, Bm.data(), 1);

        RCLCPP_INFO(this->get_logger(), "Cm * inv(Am) * Bm: %f", Cm_inv_Am_Bm);

        // Compute Kg = -inv(Cm * inv(Am) * Bm)
        double Kg = -1.0 / Cm_inv_Am_Bm;

        RCLCPP_INFO(this->get_logger(), "Kg: %f", Kg);

        double ud = Kg * y_ref - cblas_ddot(Co.size(), Co.data(), 1, xu_next.data(), 1);

        RCLCPP_INFO(this->get_logger(), "ud: %f", ud);

        // Step 17: Compute new xd step by step

        RCLCPP_INFO(this->get_logger(), "Am: ");
        for (const auto& val : Am) std::cout << val << " ";
        std::cout << std::endl;

        // Step 17.1: Compute expm(Am*Ts)
        std::vector<double> scaled_Am_2 = Am2;
        for (auto& val : scaled_Am_2) val *= Ts_;

        RCLCPP_INFO(this->get_logger(), "Am * Ts: ");
        for (const auto& val : scaled_Am_2) std::cout << val << " ";
        std::cout << std::endl;

        std::vector<double> expm_Am_Ts_2(Am.size());
        matrix_exponential(scaled_Am_2, expm_Am_Ts_2, 2);

        RCLCPP_INFO(this->get_logger(), "expm(Am * Ts): ");
        for (const auto& val : expm_Am_Ts_2) std::cout << val << " ";
        std::cout << std::endl;

        // Step 17.2: Compute expm(Am*Ts) * xd
        std::vector<double> expm_Am_Ts_xd(2);
        cblas_dgemv(CblasRowMajor, CblasNoTrans, 2, 2, 1.0, expm_Am_Ts_2.data(), 2, xd_.data(), 1, 0.0, expm_Am_Ts_xd.data(), 1);

        RCLCPP_INFO(this->get_logger(), "expm(Am * Ts) * xd: ");
        for (const auto& val : expm_Am_Ts_xd) std::cout << val << " ";
        std::cout << std::endl;

        // Step 17.4: Compute (expm(Am*Ts) - eye(length(Am)))
        std::vector<double> eye_minus_expm_Am_Ts(Am.size());
        for (size_t i = 0; i < Am.size(); ++i) {
            eye_minus_expm_Am_Ts[i] = (i % 2 == i / 2) ? expm_Am_Ts_2[i] - 1.0 : expm_Am_Ts_2[i];
        }

        RCLCPP_INFO(this->get_logger(), "(expm(Am * Ts) - eye(length(Am))): ");
        for (const auto& val : eye_minus_expm_Am_Ts) std::cout << val << " ";
        std::cout << std::endl;

        // Print inv(Am) before step 17.5
        RCLCPP_INFO(this->get_logger(), "inv(Am) before step 17.5: ");
        for (const auto& val : Am) std::cout << val << " ";
        std::cout << std::endl;

        // Step 17.5: Compute inv(Am) * (expm(Am*Ts) - eye(length(Am)))
        std::vector<double> inv_Am_eye_minus_expm_Am_Ts(eye_minus_expm_Am_Ts.size());
        cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, 2, 2, 2, 1.0, Am.data(), 2, eye_minus_expm_Am_Ts.data(), 2, 0.0, inv_Am_eye_minus_expm_Am_Ts.data(), 2);

        RCLCPP_INFO(this->get_logger(), "inv(Am) * (expm(Am * Ts) - eye(length(Am))): ");
        for (const auto& val : inv_Am_eye_minus_expm_Am_Ts) std::cout << val << " ";
        std::cout << std::endl;

        // Step 17.6: Compute Bm * ud
        std::vector<double> Bm_ud(2);
        cblas_dscal(2, ud, Bm.data(), 1);

        RCLCPP_INFO(this->get_logger(), "Bm * ud: ");
        for (const auto& val : Bm) std::cout << val << " ";
        std::cout << std::endl;

        // Step 17.7: Compute Bm * ud + sigma
        std::vector<double> Bm_ud_sigma(2);
        cblas_dcopy(2, Bm.data(), 1, Bm_ud_sigma.data(), 1);
        cblas_daxpy(2, 1.0, sigma.data(), 1, Bm_ud_sigma.data(), 1);

        RCLCPP_INFO(this->get_logger(), "Bm * ud + sigma: ");
        for (const auto& val : Bm_ud_sigma) std::cout << val << " ";
        std::cout << std::endl;

        // Step 17.8: Compute inv(Am) * (expm(Am*Ts) - eye(length(Am))) * (Bm * ud + sigma)
        std::vector<double> inv_Am_eye_minus_expm_Am_Ts_Bm_ud_sigma(2);
        cblas_dgemv(CblasRowMajor, CblasNoTrans, 2, 2, 1.0, inv_Am_eye_minus_expm_Am_Ts.data(), 2, Bm_ud_sigma.data(), 1, 0.0, inv_Am_eye_minus_expm_Am_Ts_Bm_ud_sigma.data(), 1);

        RCLCPP_INFO(this->get_logger(), "inv(Am) * (expm(Am * Ts) - eye(length(Am))) * (Bm * ud + sigma): ");
        for (const auto& val : inv_Am_eye_minus_expm_Am_Ts_Bm_ud_sigma) std::cout << val << " ";
        std::cout << std::endl;

        // Compute xd_next
        std::vector<double> new_xd(2);
        cblas_dcopy(2, expm_Am_Ts_xd.data(), 1, new_xd.data(), 1);
        cblas_daxpy(2, 1.0, inv_Am_eye_minus_expm_Am_Ts_Bm_ud_sigma.data(), 1, new_xd.data(), 1);

        xd_next = new_xd;

        RCLCPP_INFO(this->get_logger(), "xd_next: ");
        for (const auto& val : xd_next) std::cout << val << " ";
        std::cout << std::endl;

        std_msgs::msg::Float64 y_aug_msg;
        y_aug_msg.data = ud;
        y_aug_pub_->publish(y_aug_msg);

        RCLCPP_INFO(this->get_logger(), "Published y_aug: %f", ud);
    } else {
        std_msgs::msg::Float64 y_aug_msg;
        y_aug_msg.data = y_ref;
        y_aug_pub_->publish(y_aug_msg);

        xd_next = xd_;
        xu_next = xu_;
    }

    xu_ = xu_next;
    xd_ = xd_next;
}

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<L1AdaptiveNode>());
    rclcpp::shutdown();
    return 0;
}


// export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/local/vol00/home/vpetrov/dev/crazyflie_opt/ros_auv_v1_sub_l1_bebot_cpp/build/ros_auv_v1_sub_l1_bebot_cpp
// rm -rf build install log
// colcon build --packages-select ros_auv_v1_sub_l1_bebot_cpp
// source install/setup.bash
// ros2 run ros_auv_v1_sub_l1_bebot_cpp L1_adaptive_node
