
#include <iostream>
#include <list>

using namespace std;

int main() {

    double sum = 0;
    double newNum;
    while (true) {
        std::cout << ">> Please enter a number  ";
        std::cin >> newNum; // if you enter something else then a number newNum will be 0

        if (newNum == 0)
            return 0;

        sum += newNum;
        std::cout << "The sum of the entries is: " << sum << std::endl;
    }

    // Or another alternative:
    /*list<double> numbers = {};
    double temp;

    while (true) {
        std::cout << ">> Please enter a number  ";
        std::cin >> temp;

        if (!temp)
            return 0;

        numbers.push_back(temp);
        double sum = 0;

        for (auto number : numbers) {
            sum += number;
        }
        std::cout << "The sum of the entries is: " << sum << std::endl;
    }*/
}
