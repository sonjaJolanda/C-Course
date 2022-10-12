

#include <iostream>

void swapCallByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void swapCallByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int n = 1;
    int m = 2;
    std::cout << "n: " << n << ", m: " << m << std::endl;
    swapCallByValue(n, m);
    std::cout << "-> n: " << n << ", m: " << m << std::endl;

    int k = 1;
    int l = 2;
    std::cout << "k: " << k << ", l: " << l << std::endl;
    swapCallByReference(&k, &l);
    std::cout << "-> k: " << k << ", l: " << l << std::endl;
    return 0;
}
