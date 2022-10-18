#include <iostream>

int main() { // begin
	double sum = 0;

	while (1) {
		double input;
		std::cout << "Enter a value:" << std::endl;
		std::cin >> input;
		if (input == 0.0)
			break;
		sum += input;
		std::cout << "Your cumulative sum so far is: " << sum << std::endl;
	} // while

	return 0;
} // end