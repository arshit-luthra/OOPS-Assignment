#include <iostream>
using namespace std;
class College
{
protected:
    string collegeName;
public:
    College(string name)
    {
        collegeName = name;
        cout << "College Constructor Called" << endl;
    }
};
class Department : public College
{
private:
    string departmentName;
public:
    Department(string college, string department)
        : College(college)
    {
        departmentName = department;
        cout << "Department Constructor Called" << endl;
    }
    void display()
    {
        cout << "\n--- University Details ---" << endl;
        cout << "University Name: " << collegeName << endl;
        cout << "Department Name: " << departmentName << endl;
    }
};
int main()
{
    Department d("Thapar University", "CSED");
    d.display();
    return 0;
}