
#include <iostream>

int tower(int number_of_disks, char from, char to, char aux) {
    if (number_of_disks <= 1) {
        std::cout << " -> from " << from << " to " << to << std::endl;
        return 1;
    } else {
        int moves = tower(number_of_disks - 1, from, aux, to);
        moves += tower(1, from, to, aux);
        moves += tower(number_of_disks - 1, aux, to, from);
        return moves;
    }
}

int main() {
    int moves = tower(5, 'A', 'C', 'B');
    std::cout << "---> #moves: " << moves << std::endl;
    return 0;
}
