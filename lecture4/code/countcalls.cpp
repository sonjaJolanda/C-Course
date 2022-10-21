// shows using a static variable to implement a counter
// change the declaration of the variable count in this function
// so that it is not static, and see what happens.

#include <iostream>
int countcalls(void) {
  static int count = 0;
  count++;
  return(count);
}


int main(void) {

  std::cout << countcalls() << std::endl;
  std::cout << countcalls() << std::endl;
  std::cout << countcalls() << std::endl;

  return(0);
}
