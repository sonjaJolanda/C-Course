

#include <iostream>

void print_array(int a[], int len) {
    for (int i = 0; i < len; i++)
        std::cout << " i:" << i << ", a[i]:" << a[i] << " --- ";
    std::cout << "\n";
}

void print_array_with_pointers(int *a, int len) {
    for (int i = 0; i < len; i++)
        std::cout << " i:" << i << "  *a++:" << *a++ << " --- ";
    std::cout << "\n";
}

int main() {
    int array[] = {2, 4, 6, 12, 24};
    print_array(array, 5);
    print_array_with_pointers(array, 5);

    //-------------------
    int a[] = {0, 1, 2};
    int b[] = {4, 5, 6};
    int *x[2]; // array (length 2) of pointers for ints
    x[0] = a; // the array is saved in there
    x[1] = b; // the array is saved in there

    std::cout << "a:" << a << ", a[0]:" << a[0] << ", &a[0]:"  << &a[0] << std::endl;
    std::cout << "x[0]:" << x[0] << ", &x[0][0]:" << &x[0][0] << "\n&x[0]:" << &x[0] << ", x:"  << x << std::endl;

    std::cout << "\nx[1][0] --> " << x[1][0] << std::endl;
    std::cout << "x[0][0] --> " << x[0][0] << std::endl;

    std::cout << "\n*(x[1]) --> " << *(x[1]) << std::endl;
    std::cout << "*(x[0]) --> " << *(x[0]) << std::endl;

    std::cout << "\n*(x[1]+1) --> " << *(x[1] + 1) << std::endl;
    std::cout << "*(*(x+1)+1) --> " << *(*(x + 1) + 1) << std::endl;

    // the reference to an array is just the pointer to the first element

    int j = 3;
    int *u = &j;
    int **m = &u; // pointers can refer pointers, but is this how it would work?
    std::cout << "\n j:" << j << ", u:" << u << ", m:" << m << std::endl;

    return 0;
}
