#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;
public:
    void setValue(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setValue(3, 4);
    c2.setValue(2, 5);
    c3 = c1 + c2;
    cout << "First number = ";
    c1.display();
    cout << "Second number = ";
    c2.display();
    cout << "Result = ";
    c3.display();
    return 0;
}