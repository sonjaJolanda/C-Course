// Example of a bad idea - a function that sets the
// values in an array without knowing how large the
// array is. Depending on the compiler used, this 
// program will crash when run (and the user enters more
// than 3 ints). 
//
// If it doesn't crash, you can probably see that it modifies
// the variables blah or foo (which depends on you compiler and
// how it arranges things in memory).
// 

#include <iostream.h>


int read_array( int a[] ) {
  int i=0;
  int val;

  do {
    // prompt for next value
    cout << "Enter next value, 0 to end\n";

    // read in the value
    cin >> val;

    // if the user typed a 0 we are done
    // NOTE: in C++ false is 0, anything else is true,
    // so saying if (val) is like saying if (val !=0)

    if (val) a[i++] = val;

  } while (val);


  return(i);
}


int main(void) {

  // declare an array
  int blah = 123;	// initialize so we can see if it gets whacked
  int a[3];
  int foo = 22;		// initialize so we can see if it gets whacked
  int cnt;

  // Let user fill up the array
  cnt = read_array(a);

  cout << "Got " << cnt << " Values\n";
  //  print out the array

  for (int i=0;i<cnt;i++) 
    cout << "A[" << i << "] = " << a[i] << endl;

  // now print out foo and blah

  cout << "foo is " << foo << " (should be 22)" << endl; 
  cout << "blah is " << blah << " (should be 123)" << endl; 
  return(0);
}


























  
