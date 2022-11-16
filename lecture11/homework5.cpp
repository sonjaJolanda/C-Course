#include <iostream>

class Object {
public:
    static int counter;
public:
    Object() {
        counter++;
    }
};

class Character : public Object {
protected:
    char ch; // 2.
public:
    Character operator+(Character &c) {
        Character result;
        result.ch = (char) (((int) this->ch + ((int) c.ch)) % 128);
        return result;
    }

    char getCh() {
        return this->ch;
    }

    void setCh(char ch) {
        this->ch = ch;
    }
};

class Digit : public Character {
public:
    Digit operator+(Digit &d) {
        Digit result;
        result.ch = ((((int) (this->ch - 48)) + ((int) (d.ch - 48))) % 10) + 48;
        return result;
    }
};

class Letter : public Character {

};

class Vowel : public Letter {

};

class Consonant : public Letter {

};

int Object::counter = 0;

int main() {
    Object object1;
    Object object2;

    Letter letter1;
    Letter letter2;

    Vowel vowel1;
    Vowel vowel2;

    Consonant consonant1;
    Consonant consonant2;

    Character a;
    a.setCh('a');
    Character b;
    b.setCh('b');
    //std::cout << "Character: " << (a + b).getCh() << std::endl; // 3.

    Digit one;
    one.setCh('1');
    Digit two;
    two.setCh('2');
    //std::cout << "Digit: " << (one + two).getCh() << std::endl; // 4.

    std::cout << "Counter: " << Object::counter << std::endl;

    return 0;
}