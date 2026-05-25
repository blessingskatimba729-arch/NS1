#include <iostream>
using namespace std;

class Base {
private:
    int base_private;

public:
    Base() {
        base_private = 1;
    }

    void PrintBase() {
        cout << "Base private number: " << base_private << endl;
    }
};

class Derived : public Base {
private:
    int derived_private;

public:
    Derived() {
        derived_private = 4;
    }

    void PrintDerived() {
        cout << "Derived private number: " << derived_private << endl;
    }
};

int main() {
    Derived derived;

    derived.PrintBase();
    derived.PrintDerived();

    return 0;
}
