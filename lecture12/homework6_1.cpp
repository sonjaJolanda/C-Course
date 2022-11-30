#include <iostream>

class Exception {
    int error_number;
public:
    Exception(int error_number) {
        this->error_number = error_number;
    }

    void print() {
        std::cout << "this is an error of type " << this->error_number;
    }
};

void fun() {
    try {
        std::cout << "FA\n";
        throw new Exception(1);
        std::cout << "BA\n";
    }
    catch (int i) {
        std::cout << "FCA " << i << "\n";
    }
    catch (char c) {
        std::cout << "FCB " << c << "\n";
        throw;
    }
    std::cout << "BC\n";
}

int main() {
    try {
        std::cout << "A\n";
        fun();
        std::cout << "B\n";
    }
    catch (int i) {
        std::cout << "C " << i << "\n";
    }
    catch (double d) {
        std::cout << "D " << d << "\n";
    }
    catch (Exception e) {
        e.print();
    }
    catch (...) {
        std::cout << "E\n";
    }
    std::cout << "F\n";
}