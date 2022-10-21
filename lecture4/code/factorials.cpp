// computing factorials using recursion
#include <iostream>

// here is the prototype for factorial
int factorial(int);

int main(void) {
  for (int i=1;i<10;i++) {
    std::cout << "factorial(" << i << ") is " << 
      factorial(i) << std::endl;
  }
}


int factorial( int x ) {
  if (x <= 1)
    return(1);
  else
    return(x * factorial(x-1));
}


  
