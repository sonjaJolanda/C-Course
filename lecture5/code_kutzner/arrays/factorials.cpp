// computing factorials using recursion
// Saves the table in an array before printing

#include <iostream.h>

// here is the prototype for factorial
int factorial(int);

int main(void) {
  int facs[10];

  for (int i=0;i<10;i++) 
    facs[i] = factorial(i);

  for (int i=0;i<10;i++)
    cout << "factorial(" << i << ") is " << 
      facs[i] << endl;

}


int factorial( int x ) {
  if (x <= 1)
    return(1);
  else
    return(x * factorial(x-1));
}


  
