#include <iostream>

class A {
public:
    int x;
    A *objARef;

    void mainA() {
        std::cout << 'Main A: ' << std::endl;
        std::cout << 'x' << x << std::endl;
        std::cout << 'y' << y << std::endl;
        std::cout << 'z' << z << std::endl;
        // std::cout << 'objA.x'  << objA.x << std::endl;
        // std::cout << 'objA.y'  << objA.y << std::endl;
        // std::cout << 'objA.z'  << objA.z << std::endl;
        std::cout << 'objARef.x' << objARef->x << std::endl;
        std::cout << 'objARef.y' << objARef->y << std::endl;
        std::cout << 'objARef.z' << objARef->z << std::endl;
        // std::cout << 'objB.x'  << objB.x << std::endl;
        // std::cout << 'objB.y'  << objB.y << std::endl;
        // std::cout << 'objB.z'  << objB.z << std::endl;
    }

private:
    int y;
protected:
    int z;
};

// -------------------------
class B : public A {
public:
    A objA;

    void mainB() {
        std::cout << 'Main B: ' << std::endl;
        std::cout << 'x' << x << std::endl;
        // std::cout << 'y' << y << std::endl;
        std::cout << 'z' << z << std::endl;
        std::cout << 'objA.x' << objA.x << std::endl;
        // std::cout << 'objA.y' << objA.y << std::endl;
        // std::cout << 'objA.z' << objA.z << std::endl;
        std::cout << 'objARef.x' << objARef->x << std::endl;
        // std::cout << 'objARef.y' << objARef->y << std::endl;
        // std::cout << 'objARef.z' << objARef->z << std::endl;
        //  std::cout << 'objB.x' << objB.x << std::endl;
        // std::cout << 'objB.y' << objB.y << std::endl;
        // std::cout << 'objB.z' << objB.z << std::endl;
    }
};

// -------------------------
class C {
public:
    A objA;
    A *objARef;
    B objB;

    void mainC() {
        std::cout << 'Main C: ' << std::endl;
        //  std::cout << 'x' << x << std::endl;
        //  std::cout << 'y' << y << std::endl;
        //  std::cout << 'z' << z << std::endl;
        std::cout << 'objA.x' << objA.x << std::endl;
        // std::cout << 'objA.y' << objA.y << std::endl;
        // std::cout << 'objA.z' << objA.z << std::endl;
        std::cout << 'objARef.x' << objARef->x << std::endl;
        // std::cout << 'objARef.y' << objARef->y << std::endl;
        // std::cout << 'objARef.z' << objARef->z << std::endl;
        std::cout << 'objB.x' << objB.x << std::endl;
        // std::cout << 'objB.y' << objB.y << std::endl;
        //  std::cout << 'objB.z' << objB.z << std::endl;
    }
};


int main() {
    A a = A();
    B b = B();
    C c = C();
    a.mainA();
    b.mainB();
    c.mainC();
}
