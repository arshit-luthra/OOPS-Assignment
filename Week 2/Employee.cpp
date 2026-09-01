#include<iostream>
#include<string>
using namespace std;
class Employee
{
    string name;
    int empId;
    public:
    Employee(string n, int id)
    {
        name = n;
        empId = id;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Employee ID: "<<empId<<endl;
    }
};
int main()
{
    Employee e("Arshit Luthra", 20);
    e.display();
    return 0;
}