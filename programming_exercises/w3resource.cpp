//
// Created by sonja on 21.10.2022.
//

#include <iostream>;
#include <math.h>

void swap(int *first, int *second) { // ---------------!---------------!---------------
    int temp = *first;
    *first = *second;
    *second = temp;
}

void swap_without_3rd_value(int *first, int *second) {
    *first += *second;
    *second = *first - *second;
    *first = *first - *second;
}

int digits(int num) {
    num = fabs(num);
    int temp = 1;
    while (true) {
        if (num < (pow(10, temp)))
            return temp;
        temp += 1;
    }
}

void print_pattern();

int main() {

    // Write a program in C++ to find Size of fundamental data types
    std::cout << ">> " << sizeof(long double) << " bytes " << std::endl;

    // Write a program in C++ to print the sum of two numbers using variables
    int a = 3;
    int b = 4;
    std::cout << ">> sum: " << a + b << std::endl;

    // Write a program in C++ to check the upper and lower limits of long
    std::cout << ">> lower: " << INT64_MIN << ", upper: " << INT64_MAX << std::endl;

    // Write a program in C++ to display various type or arithmetic operation using mixed data type
    std::cout << "## 2 + 4.2 ?= 7.2 -> " << 3 + 4.2 << std::endl;
    std::cout << "## 2 * 4.2 ?= 8.2 -> " << 2 * 4.2 << std::endl;
    std::cout << "## 4.2 / 2 ?= 2.1 -> " << 4.2 / 2.1 << std::endl;
    std::cout << "## 2 / 4.2 ?= 0.47619... -> " << 2 / 4.2 << std::endl;

    // Write a program in C++ to display the operation of pre- and post- increment and decrement
    a = 3;
    b = 8;
    std::cout << ">> a should still be 3 -> " << a-- << ", b should still be 8 -> " << b++ << std::endl;
    std::cout << ">> next line: a -> " << a << ", b -> " << b << std::endl;
    std::cout << ">> a should now be 1 -> " << --a << ", b should now be 10 -> " << ++b << std::endl;

    // Write a program in C++ to add two numbers accept through keyboard
    a = 5; // std::cin >> a;
    b = -22; // std::cin >> b;
    std::cout << "## a: " << a << ", b: " << b << std::endl;

    // Write a program in C++ to swap two numbers
    swap(&a, &b);
    std::cout << "## after swap -> a: " << a << ", b: " << b << std::endl;

    // Write a program in C++ to check whether a number is positive, negative or zero
    std::cout << "---> a is " << ((a > 0) ? "positive" : ((a < 0) ? "negative" : "zero")) << std::endl;
    std::cout << "---> b is " << ((b > 0) ? "positive" : ((b < 0) ? "negative" : "zero")) << std::endl;

    // Write a program in C++ to print the following pattern with a prototype method
    print_pattern();

    // Write a program in C++ which swap the values of two variables not using third variable
    std::cout << "\n>> a: " << a << ", b: " << b;
    swap_without_3rd_value(&a, &b);
    std::cout << " ---> swapped ---> a: " << a << ", b: " << b << std::endl;

    // Write a program in C++ to print the code (ASCII code / Unicode code etc.) of a given character
    char character;
    character = 'M'; // std::cin >> character;
    std::cout << character << " in its code is " << (int) character << std::endl;

    // Write a program in C++ to show the manipulation of a string
    char string[] = "ExampleString";
    std::cout << ">> Length of String is " << "Hatten wir noch nicht (erst wenn wir string includen)" << std::endl;
    std::cout << ">> char at index 3 of String is " << string[3] << std::endl;
    std::cout << ">> is the string empty? " << ((string == "") ? "Yes" : "No") << std::endl;

    //  Write a C++ program to compute the sum of the two integers and count the number of digits of the sum value
    a = 3;
    b = 94302;
    std::cout << "a+b = " << a << "+" << b << " = " << (a + b) << ", digits: " << digits(a + b) << std::endl;

    // stopped at 64/86
    // https://www.w3resource.com/cpp-exercises/basic/index.php#EDITOR

    return 0;
}

void print_pattern() {
    std::cout << " xxxxx\n";
    std::cout << "x     x       x        x\n";
    std::cout << "x             x        x\n";
    std::cout << "x          xxxxxxx  xxxxxxx\n";
    std::cout << "x             x        x\n";
    std::cout << "x     x       x        x\n";
    std::cout << " xxxxx\n";
}
