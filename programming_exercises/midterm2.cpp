#include <iostream>;

int print(int p[]) {
    for (int i = 0; i < 5; i++)
        std::cout << p[i] << " - ";
    std::cout << "" << std::endl;
}

int fun(int k, int *p) { // the b was without the '&' before
    static int m = 1;
    std::cout << "m:" << m << ", k:" << k << " --> ";
    print(p);

    p[k] = k + p[k]; // ToDo this was somewhat different i think
    if (m != 0)
        k = 1 + k;
    m = 1 % (m - 2);
    return k;
}

int main() {
    int s[] = {0, 2, 3, 4, 5}; // ToDo this might have been different too
    int j = 0;
    while (j < 5)
        j = fun(j, s);
    return 0;
}
