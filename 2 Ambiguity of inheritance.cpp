#include <iostream>
using namespace std;

class Base {
private:
    int number;

public:
    Base(int num) {
        number = num;
    }

    void Base_function() {
        cout << "Base number is " << number << endl;
    }
};

class Midl : public Base {
public:
    Midl(int num) : Base(num) {}
};

class Mid2 : public Base {
public:
    Mid2(int num) : Base(num) {}
};

class Final : public Midl, public Mid2 {
public:
    Final(int num1, int num2)
        : Midl(num1), Mid2(num2) {}
};

int main() {
    Final f(1, 2);

    f.Midl::Base_function();
    f.Mid2::Base_function();

    return 0;
}
