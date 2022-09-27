

#include <iostream>

// tower of hanoi
// three towers: source, destination and the one in between (auxillery)
int tower(int n, char src, char dst, char aux) {
    if (n <= 1) {
        std::cout << "Move disk from " << src << " to " << dst << "\n";
        return 1;
    } else {
        int m1 = tower(n - 1, src, aux, dst);
        std::cout << "Move disk from " << src << " to " << dst << "\n";
        int m2 = tower(n - 1, aux, dst, src);
        return m1 + m2 + 1;
    }
}

int main() {
    int moves = tower(5, 'A', 'B', 'C');
    std::cout << "#moves: " << moves;
    //for n=3 -> moves will be 7
    //for n=4 -> moves will be 15
    //for n=5 -> moves will be 31
    // 2^n -1 moves -> this is a computational nightmare
    return 0;
}
