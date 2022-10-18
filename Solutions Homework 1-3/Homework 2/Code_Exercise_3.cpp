#include <iostream>

// Initial sum_down of the handout
int sum_down(int x)
{
	if (x >= 0)
	{
		x = x - 1;
		int y = x + sum_down(x);
		return y + sum_down(x);
	}
	else
	{
		return 1;
	}
} // function


// Transformed sum_down
int sum_down_small(int x)
{
	if (x >= 0)
	{
		return (x - 1) + 2 * sum_down_small(x - 1);
	}
	else
	{
		return 1;
	}
} // function


// Iterative sum_down using while loop
int sum_down_while(int x)
{
	int sum = 1; // initial sum (red 1 in the explanation of the solution)
	int i = -1; // blue counter in the explanation that start with -1
	while (i < x)
	{
		sum = i + 2 * sum; // counter plus 2 times existing sum
		i = i + 1; 
	} // while
	return sum;
} // function


// Iterative sum_down_while using for loop instead of while
int sum_down_for(int x)
{
	int sum = 1;
	for (int i = -1; i < x; i++)
	{
		sum = i + 2 * sum;
	} // for 
	return sum;
} // function


void main()
{
	/* We test our iterative sum_down_
	 */
	for (int x = 0; x < 20; x++)
	{
		std::cout <<"x: " << x 
			<< " original: " << sum_down(x)
			<< " transformed: " << sum_down(x)
			<< " iterative: " << sum_down_for(x) << std::endl;
	} // for
} // main