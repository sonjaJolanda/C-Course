#include <iostream>

int main() {
	int input1, input2, input3, max;

	std::cout << "Enter first value:" << std::endl;
	std::cin >> input1;
	std::cout << "Enter second value:" << std::endl;
	std::cin >> input2;
	std::cout << "Enter third value:" << std::endl;
	std::cin >> input3;

	max = input1;
	if (input2 > max)
		max = input2;
	if (input3 > max)
		max = input3;

	std::cout << "The maximum of " << input1 << ", " << input2 << ", " << input3
		<< " is " << max << std::endl;

	return 0;
}