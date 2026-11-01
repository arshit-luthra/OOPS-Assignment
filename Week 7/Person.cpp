#include <iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout << "Person constructor called" << endl;
    }
    virtual ~Person()
    {
        cout << "Person destructor called" << endl;
    }
};
class Student : public Person
{
public:
    Student()
    {
        cout << "Student constructor called" << endl;
    }
    ~Student()
    {
        cout << "Student destructor called" << endl;
    }
};
int main()
{
    Person *ptr;
    ptr = new Student();
    delete ptr;
    return 0;
}