#include<iostream>
#include<string>
using namespace std;
class Student
{
    string name;
    int rollNo;
  public:
  Student()
  {
    name = "Arhit Luthra";
    rollNo = 20;
  }
  void display()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<rollNo<<endl;
  }
};
  int main()
  {
    Student s;
    s.display();
    return 0;
  }