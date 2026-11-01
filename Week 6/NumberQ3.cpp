#include <iostream>
using namespace std;
class Number
{
    int value;
public:
    void setValue(int v)
    {
        value = v;
    }
    Number operator+(Number n)
    {
        Number temp;
        temp.value = value + n.value;
        return temp;
    }
    void display()
    {
        cout << "Value = " << value << endl;
    }
};
int main()
{
    Number n1, n2, n3;
    n1.setValue(10);
    n2.setValue(20);
    n3 = n1 + n2;
    cout << "First object: ";
    n1.display();
    cout << "Second object: ";
    n2.display();
    cout << "Sum of two objects: ";
    n3.display();
    return 0;
}