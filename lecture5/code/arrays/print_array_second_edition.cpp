#include <iostream>

void print_array(double a[], int len) {
	for (int i=0;i<len;i++) 
		std::cout << "[" << i << "] = " << a[i] << std::endl;
}

void print_array(int a[], int len) {
	for (int i=0;i<len;i++) 
		std::cout << "[" << i << "] = " << a[i] << std::endl;
}

int main(void) {
	double square[10];

	for (int i=0; i<10; i++)
		square[i] = i*i;

	print_array(square, 10);
}
