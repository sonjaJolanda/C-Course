#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> names;

	names.push_back("Kim");
	names.push_back("Park");
	names.push_back("Lee");
	names.push_back("Gang");

	for (unsigned int i = 0; i < names.size(); i++)
		cout << i << names.at(i) << endl; // ToDo this does a range check

	names[2] = "Walter";

	for (unsigned int i = 0; i < names.size(); i++) {
		string s = names[i]; // expensive ToDo this doesnt do a range check
		cout << i << s << endl;
	}

	// names.pop_front(); // only possible with class deque
	names.pop_back();

	for (unsigned int i = 0; i < names.size(); i++)
		cout << i << names[i] << endl;
}