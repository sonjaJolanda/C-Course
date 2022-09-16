

#include <iostream> // input-output-stream
// it will include input from another file
// it will generate output to another file

/* #include is a preprocessor-step, but it is not the only one existing:  */
#define AGE 45
#define MACRO(x) ((x)+(x)+(x))

int main() {
    float fahrenheit = 0;
    std::cout << ">>Please enter a number in Fahrenheit: ";
    std::cin >> fahrenheit;
    float celcius = (fahrenheit - 32.0) * 5.0 / 9.0;
    std::cout << fahrenheit << " f° is " << celcius << "C°!" << std::endl;
    return 0;
}
