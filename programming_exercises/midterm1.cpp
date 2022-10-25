#include <iostream>;

// That was find the errors in the code and correct them
// then write the output of the code
// can the 'int &a' be changed to a 'const int &a'? Explain
//  -> I answered yes, but that's wrong!

void fun(int &a, int &b) { // the b was without the '&' before
    a = a + 10;
    b = b - 10;
}

int main() { // the main had a void before
    int a = 1, b = 2;
    fun(a, b);
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    return 0;
}
