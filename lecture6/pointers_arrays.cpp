
#include <iostream>

int main() {
    int a[] = {0, 1, 2};
    int b[] = {4, 6, 7};
    int *x[2];
    x[0] = a;
    x[1] = b;

    std::cout << "*(x[1]) --> " << *(x[1]) << std::endl; // 4
    std::cout << "*(x[1] + 2) --> " << *(x[1] + 2) << std::endl; // 7
    std::cout << "*(*(x + 1) + 1) --> " << *(*(x + 1) + 1) << std::endl; // 6
    std::cout << "*(*(x) + 1) --> " << *(*(x) + 1) << std::endl; // 1

    return 0;
}
