#include <iostream>
using namespace std;

class Maximum {
public:
    void findMax(int a, int b) {
        if (a > b)
            cout << "Maximum of two integers: " << a << endl;
        else
            cout << "Maximum of two integers: " << b << endl;
    }
    void findMax(int a, int b, int c) {
        if (a >= b && a >= c)
            cout << "Maximum of three integers: " << a << endl;
        else if (b >= a && b >= c)
            cout << "Maximum of three integers: " << b << endl;
        else
            cout << "Maximum of three integers: " << c << endl;
    }
    void findMax(double a, double b)
    {
        if (a > b)
            cout << "Maximum of two decimal numbers: " << a << endl;
        else
            cout << "Maximum of two decimal numbers: " << b << endl;
    }
};

int main() {
    Maximum m;
    m.findMax(10, 20);
    m.findMax(15, 25, 18);
    m.findMax(12.5, 9.8);

    return 0;
}