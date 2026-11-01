#include <iostream>
using namespace std;
class Vehicle
{
public:
    virtual void displayInfo()
    {
        cout << "Vehicle Information" << endl;
    }
};
class Car : public Vehicle
{
public:
    void displayInfo()
    {
        cout << "Car Details:" << endl;
        cout << "Type: Four Wheeler" << endl;
        cout << "Wheels: 4" << endl;
    }
};
class Bike : public Vehicle
{
public:
    void displayInfo()
    {
        cout << "Bike Details:" << endl;
        cout << "Type: Two Wheeler" << endl;
        cout << "Wheels: 2" << endl;
    }
};
class Bus : public Vehicle
{
public:
    void displayInfo()
    {
        cout << "Bus Details:" << endl;
        cout << "Type: Public Transport" << endl;
        cout << "Wheels: 6" << endl;
    }
};
int main()
{
    Vehicle *ptr;
    Car c;
    Bike b;
    Bus bus;
    ptr = &c;
    ptr->displayInfo();
    cout << endl;
    ptr = &b;
    ptr->displayInfo();
    cout << endl;
    ptr = &bus;
    ptr->displayInfo();
    return 0;
}