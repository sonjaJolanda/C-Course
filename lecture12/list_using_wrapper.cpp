#include <iostream>

class Wrapper {
public:
	virtual void printValue(){}
};

class IntWrapper : public Wrapper {
public :
	IntWrapper(int value) {
		this->value = value;
	}
	int value;
	virtual void printValue() {std::cout << value << std::endl;}
};

class DoubleWrapper : public Wrapper {
public:
	DoubleWrapper(double value) {
		this->value = value;
	}
	double value;
	virtual void printValue() { std::cout << value << std::endl; }
};

class ListUsingWrapper {
public:
	Wrapper *key;
	ListUsingWrapper* next;

	ListUsingWrapper(Wrapper* key) {
		this->key = key;
		this->next = NULL;
	}

	ListUsingWrapper* append(Wrapper* key) {
		this->next = new ListUsingWrapper(key);
		return this->next;
	}

	void print() {
		this->key->printValue();
		if (this->next != NULL)
			this->next->print();
	}
};

int main() {
	ListUsingWrapper* anchor = new ListUsingWrapper(new IntWrapper(10));
	anchor->append(new IntWrapper(5))->append(new IntWrapper(7));
	anchor->print();
	return 0;
}