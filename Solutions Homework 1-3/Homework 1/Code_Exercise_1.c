#include <iostream>

// First, you should try to compute the value for each expression on paper.
// THIS CODE IS FOR VERFICATION PURPOSES MERELY!


int main() {
	int x = -5;
	int power = 1024;
	int y = 7;
	double item = 1.5;
	double MIN = -12.0;
	char DAY = 'M';
	int num = 12;
	int MAX = 1024;
	int Sens = 12;

	std::cout << "(x > y) && !y: " << ((x > y) && !y) << std::endl;
	std::cout << "(item>MIN)||(DAY!='M'): " << ((item > MIN) || (DAY != 'M')) << std::endl;
	std::cout << "((num*128)<power)&&y: " << (((num * 128) < power) && y) << std::endl;
	std::cout << "(!(power!=MAX))&&(Sens==num): " << ((!(power != MAX)) && (Sens == num)) << std::endl;
	std::cout << "(((y+x)<num)||(DAY=='M')): " << (((y + x) < num) || (DAY == 'M')) << std::endl;
	std::cout << "(Sens*(!y))!=0: " << ((Sens * (!y)) != 0) << std::endl;
	std::cout << "(!x||y)&&(!y||x): " << ((!x || y) && (!y || x)) << std::endl;

	return 0;
} // end main