
#include <iostream>

int main() {
    int x = -5;
    int power = 1024;
    int y = 7;
    double item = 1.5;
    double MIN = -12.0;
    char DAY = 'M';
    int num = 12;
    int MAX = 1024;
    int Sens = 12;

    bool result = (x > y) && !y;
    std::cout << "1. " << result << std::endl;

    result = (item > MIN) || (DAY != 'M');
    std::cout << "2. " << result << std::endl;

    result = ((num * 128) < power) && y;
    std::cout << "3. " << result << std::endl;

    result = (!(power != MAX)) && (Sens == num);
    std::cout << "4. " << result << std::endl;

    result = ((y + x) < num) || (DAY == 'M');
    std::cout << "5. " << result << std::endl;

    result = (Sens * (!y)) != 0;
    std::cout << "6. " << result << std::endl;

    result = (!x || y) && (!y || x);
    std::cout << "7. " << result << std::endl;

    return 0;
}
