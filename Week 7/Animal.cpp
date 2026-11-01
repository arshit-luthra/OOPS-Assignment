#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};
class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks: Woof Woof!" << endl;
    }
};
class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Cat meows: Meow Meow!" << endl;
    }
};
int main()
{
    Animal *ptr;
    Dog d;
    Cat c;
    ptr = &d;
    cout << "Dog sound: ";
    ptr->sound();
    ptr = &c;
    cout << "Cat sound: ";
    ptr->sound();
    return 0;
}