#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    // Default constructor
    Student()
    {
        age = 18;
        cout << "Default constructor called" << endl;
    }

    void display()
    {
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1; // Automatically calls default constructor
    s1.display();

    return 0;
}
