#ifndef CONTROL_SYSTEMS_H
#define CONTROL_SYSTEMS_H

#include <vector>

struct L1Struct {
    std::vector<double> Amz;
    std::vector<double> Bmz;
    std::vector<double> Cmz;
    std::vector<double> Dmz;
    std::vector<double> Aoz;
    std::vector<double> Boz;
    std::vector<double> Coz;
    std::vector<double> Doz;
    std::vector<double> Lambdaz;
    std::vector<double> Phiinvz;

    std::vector<double> Ampsi;
    std::vector<double> Bmpsi;
    std::vector<double> Cmpsi;
    std::vector<double> Dmpsi;
    std::vector<double> Aopsi;
    std::vector<double> Bopsi;
    std::vector<double> Copsi;
    std::vector<double> Dopsi;
    std::vector<double> Lambdapsi;
    std::vector<double> Phiinvpsi;
};

class ControlSystems {
public:
    ControlSystems(double Ts);
    void computeDepthSystem();
    void computeYawSystem();
    const L1Struct& getL1() const;

private:
    double Ts_;
    L1Struct L1_;
};

#endif // CONTROL_SYSTEMS_H
