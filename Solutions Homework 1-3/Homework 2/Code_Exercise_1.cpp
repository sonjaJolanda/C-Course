#include <iostream>

int fac(int n) {
	if (n <= 1)
		return 1;
	else
		return n * fac(n - 1);
} // function fac

int binomial_coefficient(int n, int r) {
	return fac(n) / (fac(n - r) * fac(r));
} // function binomial_coefficient

int main() {
	int n, r;
	std::cout << "Enter your value for n:";
	std::cin >> n;
	std::cout << "\nEnter your value for r:";
	std::cin >> r;
	std::cout << "The binomial coefficient of n:" << n << " and r:" << r <<
		" is " << binomial_coefficient(n, r) << std::endl;
} // end main

