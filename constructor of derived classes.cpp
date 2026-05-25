#include <iostream>
using namespace std;

class Base {
private:
    int base_num;

public:
    Base() {
        base_num = 1;
        cout << "Constructor of base class" << endl;
    }

    Base(int n1) {
        base_num = n1;
        cout << "Constructor of base class" << endl;
    }
};

class Derived : public Base {
private:
    int derived_num;

public:
    Derived(int n) {
        derived_num = n;
        cout << "Constructor of derived class" << endl;
    }

    Derived(int n1, int n2) : Base(n1) {
        derived_num = n2;
        cout << "Constructor of derived class" << endl;
    }
};

int main() {
    Derived* ptr1 = new Derived(2);
    Derived* ptr2 = new Derived(1, 2);

    return 0;
}
