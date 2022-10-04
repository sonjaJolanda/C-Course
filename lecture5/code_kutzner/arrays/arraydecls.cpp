// examples of array declarations
// 

#include <iostream.h>

// here are some global arrays

int table[100];
int salaries[55];

int main(void) {
  // some arrays that are local variables

  char document[1024*1024];	// 1 megabyte

  int max = 10;

  {
    // an array with block scope
    int nums[max];

  }
  cout << "I don't do anything, I just have a bunch of array declarations!" << endl;

  return(0);
}


  
