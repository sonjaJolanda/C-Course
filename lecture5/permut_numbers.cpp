
#include <iostream>

void print(int pre[], int perm[]) {
    int pre_length = sizeof(pre) / sizeof(pre[0]);
    for (int i = 0; i < pre_length; i++)
        std::cout << pre[i];
    std::cout << perm[0] << std::endl;
}

void permute(int pre[], int perm[], int pre_length, int perm_length) {
    if (perm_length == 1)
        print(pre, perm);
    else {
        for (int k = 0; k < perm_length; k++) {

            // append perm[i] to pre
            int newPre[pre_length + 1];
            for (int i = 0; i < pre_length; i++) {
                newPre[i] = pre[i];
            }
            newPre[pre_length] = perm[k];

            // delete perm[i] in perm
            int newPerm[perm_length - 1];
            for (int i = 0; i < perm_length; i++) {
                if (i < k)
                    newPerm[i] = perm[i];
                else if (i > k)
                    newPerm[i - 1] = perm[i];
            }

            permute(newPre, newPerm, pre_length + 1, perm_length - 1);
        }
    }
}

void permute_number(int number) {
    int permutation[number];
    for (int i = 1; i <= number; i++) {
        permutation[i - 1] = i;
    }
    int pre[] = {};
    permute(pre, permutation, 0, number);
}

int main() {
    int nEntered;
    std::cout << ">> Please enter a number: ";
    std::cin >> nEntered;
    permute_number(nEntered);

    return 0;
}
