extern int g; // variable declaration
// without the extern we would have the g two times (in the other file) -> error because we have two different addresses for g
// if we switch extern with static, we limit the visibility to the global variable to the current file!! -> encapsulation
// you can do all that with functions too

// ToDo find a way to execute two source files (week4_3 and week4_2) at the same time!
// ToDo google difference between variable definition and declaration and storage classes
