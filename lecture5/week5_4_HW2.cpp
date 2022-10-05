
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
    for(int i = 0; i < x; i++){
        y = i + temp;
        y = y + temp;
        temp = y;
    }
    return y;
}

int main() {
    std::cout << "rec " << sum_down_rec(5) << std::endl;
    std::cout << "it " << sum_down_it(5);
    return 0;
}
