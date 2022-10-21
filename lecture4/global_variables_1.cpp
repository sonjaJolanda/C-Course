
#include <iostream>

int g; // global variable definition

int fun() {
    static int j = 7; // global variable with local scope!! ToDo google this too!
    j += 1;
    return j;
}

int main() {
    std::cout << fun() << std::endl;
    std::cout << fun() << std::endl;
    std::cout << fun() << std::endl;
    return 0;
}
