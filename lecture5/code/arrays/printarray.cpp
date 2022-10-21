// examples of array declarations
// 

#include <iostream.h>

#include <math.h> 	// used for some math functions

// array printing functions

void print_array( int a[], int len) {
  
  for (int i=0;i<len;i++)
    cout << "[" << i << "] = " << a[i] << endl;

}

void print_array( double a[], int len) {
  
  for (int i=0;i<len;i++)
    cout << "[" << i << "] = " << a[i] << endl;

}


// main that calls both the functions

int main(void) {
  
  int angles[10] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
  double cosines[10];

  for (int i=0;i<10;i++) 
    cosines[i] = cos(angles[i] * (3.141593/180));

  cout << "Here are the angles " << endl;
  print_array(angles,10);

  cout << "Here are the cosines " << endl;
  print_array(cosines,10);

  return(0);
}



