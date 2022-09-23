
#include <iostream>

int main() {

    int numbers[3] = {};
    // array was not necessary here, I could just use 3 integer variables

    std::cout << ">> Please enter a number (integer)  ";
    std::cin >> numbers[0];
    std::cout << ">> Please enter a second number (already entered:" << numbers[0] << ")  ";
    std::cin >> numbers[1];
    std::cout << ">> Please enter a third number (already entered:" << numbers[0] << ", " << numbers[1] << ")  ";
    std::cin >> numbers[2];

    int max = numbers[0];

    if (numbers[0] > numbers[1] && numbers[0] > numbers[2])
        max = numbers[0];
    else if (numbers[1] > numbers[0] && numbers[1] > numbers[2])
        max = numbers[1];
    else if (numbers[2] > numbers[0] && numbers[2] > numbers[1])
        max = numbers[2];
    else
        std::cout << "Something went wrong!!" << std::endl;

    // another possible solution:
    /*for (int number: numbers) {
        if (number > max)
            max = number;
    }*/

    std::cout << ">> The max of the 3 values entered is: " << max << std::endl;

    return 0;
}
