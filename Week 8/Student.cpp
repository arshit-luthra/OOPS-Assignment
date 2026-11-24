#include <iostream>
using namespace std;

class Student
{
    int marks[5];

public:
    void inputMarks()
    {
        cout << "Enter marks in five subjects:" << endl;

        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];

            if (marks[i] < 0 || marks[i] > 100)
            {
                throw marks[i];
            }
        }
    }

    void displayAverage()
    {
        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            sum = sum + marks[i];
        }

        cout << "Average Marks = " << sum / 5.0 << endl;
    }
};

int main()
{
    Student s;

    try
    {
        s.inputMarks();
        s.displayAverage();
    }
    catch (int x)
    {
        cout << "Exception caught: Invalid marks "
             << x << ". Marks must be between 0 and 100." << endl;
    }

    return 0;
}