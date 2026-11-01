#include <iostream>
using namespace std;
class Student
{
    float CGPA;
public:
    void setCGPA(float c)
    {
        CGPA = c;
    }
    bool operator==(Student s)
    {
        return CGPA == s.CGPA;
    }
    bool operator>(Student s)
    {
        return CGPA > s.CGPA;
    }
};
int main()
{
    Student s1, s2;
    s1.setCGPA(8.5);
    s2.setCGPA(9.2);
    if (s1 == s2)
        cout << "Both students have the same CGPA." << endl;
    else
        cout << "Both students have different CGPA." << endl;
    if (s1 > s2)
        cout << "Student 1 has higher CGPA." << endl;
    else if (s2 > s1)
        cout << "Student 2 has higher CGPA." << endl;
    else
        cout << "Both students have equal CGPA." << endl;
    return 0;
}