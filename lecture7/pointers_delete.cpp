
#include <iostream>

int main() {
    double *p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    std::cout << "p3[0] = " << p3[0] << ", p3[1] = " << p3[1] << std::endl; // p3[0] = 0.2, p3[1] = 0.5
    p3 = p3 + 1;
    std::cout << "p3[0] = " << p3[0] << ", p3[1] = " << p3[1] << std::endl; // p3[0] = 0.5, p3[1] = 0.8
    p3 = p3 - 1;
    std::cout << "p3[0] = " << p3[0] << ", p3[1] = " << p3[1] << std::endl; // p3[0] = 0.2, p3[1] = 0.5
    delete[] p3;
    std::cout << "p3[0] = " << p3[0] << ", p3[1] = " << p3[1]
              << std::endl; // p3[0] = 1.24772e-311, p3[1] = 1.24772e-311

    return 0;
}
