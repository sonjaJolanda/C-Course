#include <iostream>

void swap(int& i, int& j) {
	int tmp = i;
	i = j;
	j = tmp;
} // end swap

int main() {
	int input_a, input_b;
	int g; // Computed GCD of a and b

	std::cout << "Enter first value:" << std::endl;
	std::cin >> input_a;

	std::cout << "Enter second value:" << std::endl;
	std::cin >> input_b;
	
	int a = input_a;
	int b = input_b;
	// 1. If a < b, exchange a and b. 
	if (a < b)
		swap(a, b);

	while (1) {
		// 2. Divide a by b and get the remainder, r. 
		int r = a % b; // remainder
		if (r == 0) {
			// report b as the GCD of a and b
			g = b;
			break;
		}
		// 3. Replace a by b and replace b by r.
		a = b;
		b = r;
	} // while

	std::cout << "The greatest common divisor of " << input_a 
			  << " and " << input_b << " is: " << g << std::endl;

	return 0;
} // end main
