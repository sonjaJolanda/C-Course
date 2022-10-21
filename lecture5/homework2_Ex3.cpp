
#include <iostream>

int sum_down_rec(int x) {
    if (x >= 0) {
        x = x - 1;
        int y = x + sum_down_rec(x);
        return y + sum_down_rec(x);
    } else {
        return 1;
    }
}

int sum_down_it(int x) {
    int temp = 1;
    int y;

    if (x <= 0)
        return temp;

    for (int i = 0; i < x; i++) {
        y = i + temp;
        y = y + temp;
        temp = y;
    }
    return y;
}

int main() {
    std::cout << "-1: recursive: " << sum_down_rec(-1) << " | iterative " << sum_down_it(-1) << "\n";
    std::cout << "0: recursive: " << sum_down_rec(0) << " | iterative " << sum_down_it(0) << "\n";
    std::cout << "1:  recursive: " << sum_down_rec(1) << " | iterative " << sum_down_it(1) << "\n";
    std::cout << "2:  recursive: " << sum_down_rec(2) << " | iterative " << sum_down_it(2) << "\n";
    std::cout << "3:  recursive: " << sum_down_rec(3) << " | iterative " << sum_down_it(3) << "\n";
    std::cout << "4:  recursive: " << sum_down_rec(4) << " | iterative " << sum_down_it(4) << "\n";
    std::cout << "5:  recursive: " << sum_down_rec(5) << " | iterative " << sum_down_it(5) << "\n";
    std::cout << "6:  recursive: " << sum_down_rec(6) << " | iterative " << sum_down_it(6) << "\n";
    std::cout << "7:  recursive: " << sum_down_rec(7) << " | iterative " << sum_down_it(7) << "\n";
    std::cout << "8:  recursive: " << sum_down_rec(8) << " | iterative " << sum_down_it(8) << "\n";
    std::cout << "9:  recursive: " << sum_down_rec(9) << " | iterative " << sum_down_it(9) << "\n";
    std::cout << "10: recursive: " << sum_down_rec(10) << " | iterative " << sum_down_it(10) << "\n";
    std::cout << "11: recursive: " << sum_down_rec(11) << " | iterative " << sum_down_it(11) << "\n";
    std::cout << "12: recursive: " << sum_down_rec(12) << " | iterative " << sum_down_it(12) << "\n";
    std::cout << "13: recursive: " << sum_down_rec(13) << " | iterative " << sum_down_it(13) << "\n";

    std::cout << "\n18: recursive: " << sum_down_rec(18) << " | iterative " << sum_down_it(18) << "\n";
    std::cout << "19: recursive: " << sum_down_rec(19) << " | iterative " << sum_down_it(19) << "\n";
    return 0;
}
