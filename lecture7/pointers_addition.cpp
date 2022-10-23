
#include <iostream>

int main() {
    double wages[3] = {10000.00, 20000.00, 30000};
    short stacks[3] = {3, 2, 1};

    double *pw = wages;
    short *ps = &stacks[0];

    std::cout << ">> pw = " << pw << ", *pw = " << *pw << std::endl;  // 0xd56ebff930, 10000

    pw = pw + 1;
    std::cout << "add 1 to the pw pointer: " << std::endl;
    std::cout << ">> pw = " << pw << ", *pw = " << *pw << std::endl; // 0xd56ebff938, 20000

    std::cout << "\n>> ps = " << ps << ", *ps = " << *ps << std::endl; // 0xbe8cdffa9a, 3
    ps = ps + 1;
    std::cout << "add 1 to the ps pointer: " << std::endl;
    std::cout << ">> ps = " << ps << ", *ps = " << *ps << std::endl; // 0xbe8cdffa9c, 2

    std::cout << "\n>> stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << std::endl; // 3, 2
    std::cout << ">> *stacks = " << *stacks << ", *(stacks+1) = " << *(stacks + 1) << std::endl; // 3, 2

    std::cout << "\n>> size of wages array: " << sizeof(wages) << std::endl; // 24
    std::cout << ">> size of wages[0]: " << sizeof(wages[0]) << std::endl; // 8
    std::cout << ">> size of pw pointer: " << sizeof(pw) << std::endl; // 8

    return 0;
}
