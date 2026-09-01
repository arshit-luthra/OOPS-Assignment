#include<iostream>
#include<string>
using namespace std;
class Student
{
    string name;
    int rollNo;
    float cgpa;
    public:
    Student()
    {
        name="Unknown";
        rollNo=0;
        cgpa=0;
    }
    Student(string n, int r)
    {
        name=n;
        rollNo=r;
        cgpa=0;
    }
    Student(string n, int r, float c)
    {
        name=n;
        rollNo=r;
        cgpa=c;
    }
    void display()
    {
        cout<<name<<" "<<rollNo<<" "<<cgpa<<endl;
    }
};
int main()
{
    Student s1;
    Student s2("Rahul", 101);
    Student s3("Asha",102, 8.7);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
