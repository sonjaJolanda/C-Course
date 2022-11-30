// for_each example
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void myfunction(int i) {
	cout << " " << i;
}

struct myclass {
	void operator() (int i) { cout << " " << i; } // functor ToDo GOOGLE
} myobject;

int main() {
	vector<int> myvector;
	myvector.push_back(10);
	myvector.push_back(20);
	myvector.push_back(30);

	cout << "Using function:";
	for_each(myvector.begin(), myvector.end(), myfunction);

	// or:
	cout << "\nUsing functor:";
	for_each(myvector.begin(), myvector.end(), myobject);

	// or: Range - based for loop(since C++11)
	cout << "\nRange - based for loop(since C++11):";
	for (int i : myvector) 
		myfunction(i);

	cout << "\nRange - based for loop(since C++11) -  simplified:";
	for (int i : myvector)
		cout << " " << i;

	cout << endl;

	return 0;
}