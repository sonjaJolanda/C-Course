// Hello World program
#include <iostream>

int main(void) {
	int square[10];

	for (int i=0; i<10; i++)
		square [i] = i*i;

	for (int i=0;i<10;i++) {
		std::cout << i << "*" << i << " is " <<
		square[i] << std::endl;
	}
}
