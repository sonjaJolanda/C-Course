// Example of using a 2-Dimentional array in C++
// 

#include <iostream.h>


// define the number of students and homeworks
// These are declared as const - they can't be changed!

const int NumStudents = 2;
const int NumHW = 3;


// this function has parameters:
//    g - a 2-d array of ints
//    stu - the student number (first subscript)

double student_average( double g[][NumHW], int stu) {
  double sum = 0.0;
  for (int i=0;i<NumHW;i++)
    sum += g[stu][i];

  return(sum/NumHW);
}


// this function is more general, it can average any array of doubles
//   len is the number of elements in the array


double array_average( double a[], int len) {
  double sum = 0.0;
  for (int i=0;i<len;i++)
    sum += a[i];
    
  if (len==0)
    return(0);
  else
    return(sum/len);
}



int main(void) {

  // declare the grades array
  double grades[NumStudents][NumHW];


  // read in grades from standard input

  for (int i=0;i<NumStudents;i++) {
    for (int j=0;j<NumHW;j++) {
      cout << "Enter HW " << j << " Grade for student number "
	   << i << endl;
      cin >> grades[i][j];
    }
  }

  // Using student_average print averages 
  for (int i=0;i<NumStudents;i++) 
    cout << "Student #" << i << " has average "
         << student_average( grades, i ) << endl;



  // Using array_average print averages
  for (int i=0;i<NumStudents;i++) 
    cout << "Student #" << i << " has average "
         << array_average( grades[i], NumHW ) << endl;


  return(0);
}


























  
