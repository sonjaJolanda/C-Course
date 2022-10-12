

#include <iostream>

void print_array(int a[], int len) {
    int temp = x;
    x = y;
    y = temp;
}

void print_array_with_pointers(int *a, int len) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int array[] = {2, 4, 6, 12, 24};
    print_array(array, 5);
    print_array_with_pointers(array, 5);
    return 0;
}
