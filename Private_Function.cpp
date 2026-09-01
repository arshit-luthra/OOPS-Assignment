#include <iostream>
using namespace std;

class Student
{
private:
    void privateFunction()
    {
        cout << "Private member function called." << endl;
    }

public:
    void publicFunction()
    {
        cout << "Public member function called." << endl;
        privateFunction();
    }
};

int main()
{
    Student s;

    s.publicFunction();

    return 0;
}