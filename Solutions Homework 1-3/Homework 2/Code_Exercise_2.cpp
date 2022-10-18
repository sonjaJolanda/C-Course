# include <iostream>     

/* Function to swap values at two pointers */
void swap(int& x, int& y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

// Print the first n element of the array a
void print_array(int a[], int n) {
	for (int j = 0; j <= n; j++)
		std::cout << a[j];
	std::cout << std::endl;
}

// The arguments
// a: input array
// i: start index in the input array
// n: index of last element in array 
void permute(int a[], int i, int n) {
	std::cout << "Start Call i: " << i << " array: ";
	print_array(a, n);
	if (i == n)
		// print the permuation to std::cout
		print_array(a, n);
	else
	{
		for (int j = i; j <= n; j++)
		{
			std::cout << "swap to   i:" << i << " j: " << j << " with a[i]: " << a[i] << " and a[j]: " << a[j] << std::endl;
			swap(a[i], a[j]);
			permute(a, i + 1, n);
			std::cout << "swap back i:" << i << " j: " << j << " with a[i]: " << a[i] << " and a[j]: " << a[j] << std::endl;
			swap(a[i], a[j]); //backtrack        
		}
	}
	std::cout << "End  Call i: " << i << " array: " << std::endl;
}

void permutNumbers(int n) {
	int a[30];
	// intialize the array as [1, 2, 3, .. ,30]
	for (int i = 1; i <= n; i++)
		a[i - 1] = i;

	// Call the permute function 
	permute(a, 0, n - 1);
}

/* Driver program to test above functions */
int main() {
	permutNumbers(3);
	return 0;
}