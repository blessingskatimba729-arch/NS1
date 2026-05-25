#include <iostream>
using namespace std;

class Base {
private:
    int base_private;

protected:
    int base_protected;

public:
    int base_public;

    void setBaseNum(int n1, int n2, int n3) {
        base_private = n1;
        base_protected = n2;
        base_public = n3;
    }

    void printBase() {
        cout << base_private << " " << base_protected << " " << base_public << endl;
    }
};

class Derived : public Base {
public:
    void setBaseNum(int n1, int n2, int n3) {
        base_protected = n2;
        base_public = n3;
    }
};

int main() {
    Base base;
    base.setBaseNum(1, 2, 3);
    base.printBase();

    return 0;
}
