

#include <iostream> // input-output-stream
// it will include input from another file
// it will generate output to another file

// #<something> are preprocessor-steps
#define AGE 45
#define MACRO(x) ((x)+(x)+(x))

int main() { //opening brace
    std::cout << "Hello, World! My age is " << AGE << std::endl;
    std::cout << "MACRO(3) " << MACRO(3) << std::endl;

    int whatIfUndefined;
    std::cout << "whatIfUndefined --> " << whatIfUndefined << std::endl; // -> 0 but not advisable

    /* int, float, double, bool, char, somethingLikeString
     bools are represented by integerss 0 -> false and every other integer -> true*/

    char i[] = "";
    std::cout << ">> Please enter something!";
    std::cin >> i;
    std::cout << "Your entered " << i << std::endl;

    int m = 1;
    do
        std::cout << "i is " << m++ << std::endl;
    while (m <= 10);

    return 0; // you don't necessarily need to return something -> but if not, then the method head: void

    // variables no camelcase! use underscores!
}
