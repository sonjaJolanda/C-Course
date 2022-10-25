#include <iostream>;

int recursive(int x) {
    if (x <= 0)
        return 1;
    else
        return 1 + 2 * recursive(x - 2);
}

int iterative(int x) {
    int sum = 1;
    for (int i = 1; i <= x; i = i + 2) // ToDo I think I had i = 3 there! :(
        sum = 1 + 2 * sum;
    return sum;
}

int main() {
    // recursive to iterative
    std::cout << "0: recursive: " << recursive(0) << ", iterative: " << iterative(0) << std::endl;
    std::cout << "1: recursive: " << recursive(1) << ", iterative: " << iterative(1) << std::endl;
    std::cout << "2: recursive: " << recursive(2) << ", iterative: " << iterative(2) << std::endl;
    std::cout << "3: recursive: " << recursive(3) << ", iterative: " << iterative(3) << std::endl;
    std::cout << "4: recursive: " << recursive(4) << ", iterative: " << iterative(4) << std::endl;
    std::cout << "5: recursive: " << recursive(5) << ", iterative: " << iterative(5) << std::endl;
    std::cout << "6: recursive: " << recursive(6) << ", iterative: " << iterative(6) << std::endl;
    std::cout << "7: recursive: " << recursive(7) << ", iterative: " << iterative(7) << std::endl;
    std::cout << "8: recursive: " << recursive(8) << ", iterative: " << iterative(8) << std::endl;
    return 0;
}
