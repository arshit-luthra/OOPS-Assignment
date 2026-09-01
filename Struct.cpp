#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string Name;
    int RollNo;
    string Degree;
    string Hostel;
    float CurrentCGPA;

    void addDetails()
    {
        cout << "Enter Student Name: ";
        cin >> Name;

        cout << "Enter Roll No: ";
        cin >> RollNo;

        cout << "Enter Degree: ";
        cin >> Degree;

        cout << "Enter Hostel: ";
        cin >> Hostel;

        cout << "Enter Current CGPA: ";
        cin >> CurrentCGPA;
    }

    void updateDetails()
    {
        cout << "\nEnter Updated Student Details:\n";

        cout << "Enter Name: ";
        cin >> Name;

        cout << "Enter Roll No: ";
        cin >> RollNo;

        cout << "Enter Degree: ";
        cin >> Degree;

        cout << "Enter Hostel: ";
        cin >> Hostel;

        cout << "Enter Current CGPA: ";
        cin >> CurrentCGPA;
    }

    void updateCGPA()
    {
        cout << "Enter New CGPA: ";
        cin >> CurrentCGPA;
        cout << "CGPA updated successfully!\n";
    }

    void updateHostel()
    {
        cout << "Enter New Hostel: ";
        cin >> Hostel;
        cout << "Hostel updated successfully!\n";
    }

    void displayDetails()
    {
        cout << "\n----- Student Details -----\n";
        cout << "Name        : " << Name << endl;
        cout << "Roll No     : " << RollNo << endl;
        cout << "Degree      : " << Degree << endl;
        cout << "Hostel      : " << Hostel << endl;
        cout << "Current CGPA: " << CurrentCGPA << endl;
    }
};

int main()
{
    Student s;

    cout << "Enter Student Details:\n";
    s.addDetails();

    s.displayDetails();

    cout << "\nUpdating CGPA...\n";
    s.updateCGPA();

    cout << "\nUpdating Hostel...\n";
    s.updateHostel();

    cout << "\nUpdated Student Details:";
    s.displayDetails();

    return 0;
}