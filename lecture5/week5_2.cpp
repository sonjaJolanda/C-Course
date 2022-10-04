
#include <iostream>

int factorial(int n) {
    return (n == 1) ? n : n * factorial(n - 1);
}

int calc_binomical_coefficient(int n, int r) {
    return factorial(n) / factorial(n - r) * factorial(r);
}

int main() {
    int nEntered;
    int rEntered;
    std::cout << ">> To calculate the binomial coefficient , please enter the n: ";
    std::cin >> nEntered;
    std::cout << ">> please enter the r: ";
    std::cin >> rEntered;
    std::cout << "---> binomial coefficient of n:" << nEntered << ", r:" << rEntered << " --> "
              << calc_binomical_coefficient(nEntered, rEntered) << std::endl;
    return 0;
}
