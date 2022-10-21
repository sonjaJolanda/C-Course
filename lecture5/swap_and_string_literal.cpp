

#include <iostream>

int swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int i = 2;
    int j = 4;
    swap(i, j);
    std::cout << "i:" << i << ", j:" << j << std::endl;

    //-----------------------------------

    char p[] = {'A', 'r', 'n', 'e'};
    std::cout << "size of p:" << sizeof(p) << " (" << p << ") " << std::endl;
    char q[] = "Arne";
    std::cout << "size of q:" << sizeof(q) << " (" << q << ") " << std::endl;
    // this is because a String literal always has a null at the end
    // like this:
    char m[] = {'A', 'r', 'n', 'e', '\0'};
    std::cout << "size of m:" << sizeof(m) << " (" << m << ") " << std::endl;

    return 0;
}
