#include <iostream>

// function prints bar diagram for counter array
// (Exercise 1b)
void print_histogram(int counter[]) {
	int max = 0;
	for (int i = 0; i < 26; i++)
		if (counter[i] > max)
			max = counter[i];
	for (int j = max; j > 0; j--) {
		for (int i = 0; i < 26; i++)
			if (counter[i] >= j)
				std::cout << "*";
			else
				std::cout << " ";
		std::cout << std::endl;
	} // out for
	for (int i = 0; i < 26; i++) {
		char ch = 65 + i;
		std::cout << ch;
	} // for
	std::cout << std::endl;
} // function

// Exercise 1a
void count_chars(char text[]) {
	// character counters
	int counter[26] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0 };
	int i = 0;
	char ch;
	// central counting loop
	while ((ch = text[i]) != '\0')
	{
		if (ch >= 65 && (ch <= 90)) // upper case character
			counter[ch - 65]++;
		if (ch >= 97 && (ch <= 122)) // lower case character
			counter[ch - 97]++;
		i++;
	} // while

	for (i = 0; i < 26; i++) { // print the counting array
		char chUpper = 65 + i;
		char chLower = 97 + i;
		std::cout << chUpper << ", " << chLower << " : " << counter[i] << std::endl;
	} // for

	print_histogram(counter); // Exercise 1b
} // function

int main() {
	char text[] = "Today is a nice day for having a little picnic.";
	count_chars(text);
	return 0;
} // end main
