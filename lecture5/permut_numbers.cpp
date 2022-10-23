
#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void permute(int a[], int helper, int n) {

    if (helper == n) {
        for (int i = 0; i <= n; i++) {
            std::cout << a[i];
        }
        std::cout << " ";
    } else {
        // Permutations made
        for (int i = helper; i <= n; i++) {
            swap(a[helper], a[i]);
            permute(a, helper + 1, n);
            swap(a[helper], a[i]);
        }
    }
}

void permutateNumbers(int n) {
    int permutation[n];
    for (int i = 1; i <= n; i++) {
        permutation[i - 1] = i;
    }
    permute(permutation, 0, n - 1);
}

int main() {
    int nEntered;
    std::cout << ">> Please enter a number: ";
    std::cin >> nEntered;
    permutateNumbers(nEntered);

    int x = 0;
    int *p;
    p = &x;
    *p = 5;

    return 0;
}
