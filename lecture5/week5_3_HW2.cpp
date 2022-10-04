
#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

 void printALlPermutations(int permutation[], int helper, int n) {

    if (helper == 1) { //print
        for (int i = 0; i < n; i++)
            std::cout << permutation[i];
        printf(" ");
        return;
    }

    for (int i = 0; i < helper; i++) {
        printALlPermutations(permutation, helper - 1, n);
        // if helper is odd, swap 0th i.e (first) and (helper-1)th i.e (last) element
        if (helper % 2 == 1)
            swap(permutation[0], permutation[helper - 1]);
        else
            swap(permutation[i], permutation[helper - 1]); // If helper is even, swap ith and (helper-1)th i.e (last) element
    }
}

void printAllPermutationsFromOneToN(int n) {
    int permutation[n];
    for (int i = 1; i <= n; i++) {
        permutation[i - 1] = i;
    }
    printALlPermutations(permutation, n, n);
}

int main() {
    int nEntered;
    std::cout << ">> Please enter a number: ";
    std::cin >> nEntered;
    printAllPermutationsFromOneToN(nEntered);
    return 0;
}
