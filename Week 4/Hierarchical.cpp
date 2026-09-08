#include <iostream>
using namespace std;
class Vehicle
{
protected:
    string brand;
    string model;
public:
    void acceptVehicle()
    {
        cout << "Enter Brand: ";
        cin >> brand;
        cout << "Enter Model: ";
        cin >> model;
    }
};
class Car : public Vehicle
{
private:
    int numberOfDoors;
public:
    void acceptCar()
    {
        acceptVehicle();
        cout << "Enter Number of Doors: ";
        cin >> numberOfDoors;
    }
    void displayCar()
    {
        cout << "\n--- Car Details ---" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Number of Doors: " << numberOfDoors << endl;
    }
};
class Bike : public Vehicle
{
private:
    int engineCapacity;
public:
    void acceptBike()
    {
        acceptVehicle();
        cout << "Enter Engine Capacity (cc): ";
        cin >> engineCapacity;
    }
    void displayBike()
    {
        cout << "\n--- Bike Details ---" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};
int main()
{
    Car c;
    Bike b;
    cout << "Enter Car Details:" << endl;
    c.acceptCar();
    c.displayCar();
    cout << "\nEnter Bike Details:" << endl;
    b.acceptBike();
    b.displayBike();
    return 0;
}