#include "control_systems.h"
#include <iostream>

void printMatrix(const std::vector<double>& matrix, int rows, int cols, const std::string& name) {
    std::cout << name << ": " << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i * cols + j] << " ";
        }
        std::cout << std::endl;
    }
}

void printVector(const std::vector<double>& vec, const std::string& name) {
    std::cout << name << ": ";
    for (const auto& val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    double Ts = 0.05;
    ControlSystems controlSystems(Ts);

    controlSystems.computeDepthSystem();
    controlSystems.computeYawSystem();

    const L1Struct& L1 = controlSystems.getL1();

    printMatrix(L1.Amz, 2, 2, "Amz");
    printMatrix(L1.Bmz, 2, 1, "Bmz");
    printMatrix(L1.Cmz, 1, 2, "Cmz");
    printVector(L1.Dmz, "Dmz");

    printMatrix(L1.Aoz, 3, 3, "Aoz");
    printMatrix(L1.Boz, 3, 2, "Boz");
    printMatrix(L1.Coz, 1, 3, "Coz");
    printVector(L1.Doz, "Doz");

    printMatrix(L1.Lambdaz, 2, 2, "Lambdaz");
    printMatrix(L1.Phiinvz, 2, 2, "Phiinvz");

    printMatrix(L1.Ampsi, 2, 2, "Ampsi");
    printMatrix(L1.Bmpsi, 2, 1, "Bmpsi");
    printMatrix(L1.Cmpsi, 1, 2, "Cmpsi");
    printVector(L1.Dmpsi, "Dmpsi");

    printMatrix(L1.Aopsi, 3, 3, "Aopsi");
    printMatrix(L1.Bopsi, 3, 2, "Bopsi");
    printMatrix(L1.Copsi, 1, 3, "Copsi");
    printVector(L1.Dopsi, "Dopsi");

    printMatrix(L1.Lambdapsi, 2, 2, "Lambdapsi");
    printMatrix(L1.Phiinvpsi, 2, 2, "Phiinvpsi");

    return 0;
}
