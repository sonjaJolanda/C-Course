
#include <iostream>

using namespace std;

class GCD {
public:
    double getEntry() {
        int entry;
        std::cout << ">> Please enter a number  ";
        std::cin >> entry;
        while (entry < 0) {
            std::cout << "Invalid entry. Please type in a positive integer!" << std::endl;
            std::cin >> entry;
        }
        return entry;
    }

    double getGCD(int a, int b) {
        while(true){
            if (a < b) {
                int temp = a;
                a = b;
                b = temp;
            }

            int r = a % b;
            if (r == 0)
                return b;

            a = b;
            b = r;
        }

        // alternative using recursion
        /*if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }

        int r = a % b;
        if (r == 0)
            return b;

        return getGCD(b, r);*/
    }
};

int main() {

    // object orientation wasn't necessary here, I just wanted to try it
    GCD gcd_obj;
    int a = gcd_obj.getEntry();
    int b = gcd_obj.getEntry();

    std::cout << "The gcd of " << a << " and " << b << " is " << gcd_obj.getGCD(a, b) << std::endl;
}