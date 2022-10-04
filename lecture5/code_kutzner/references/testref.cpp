// shows an example of using reference variables and
// reference parameters.
//

#include <iostream>

// Provide prototypes for functions declared below main

void refvar( void );
void refparm( void );



int main(void) {

  refvar();
  refparm();

  return(0);
}

// shows how to create and use a reference variable
void refvar(void) {
  int count;
  int &blah = count;
  // blah is the same variable as count.

  count = 1;
  std::cout << "blah is " << blah << std::endl;

  blah++;
  std::cout << "count is " << count << std::endl;
}


// a function that has a reference parameter
void add10( int &x) {
  x = x+10;
}

// function that tests calling add10

void refparm(void) {
  int counter;

  counter = 15;
  std::cout << "counter is " << counter << std::endl;

  add10(counter);
  std::cout << "counter is " << counter << std::endl;
}
