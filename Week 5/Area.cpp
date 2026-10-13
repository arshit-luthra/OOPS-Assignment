#include<iostream>
#define pi 3.14159
using namespace std;

class Area {
    public:
int calculate(int side) {
    return side*side;
}

int calculate(int l, int b) {
    return l*b;
}

double calculate(double radius) {
    return pi*radius*radius;
}
};

int main() {
    Area area;
    cout<<"Area of Square: "<<area.calculate(5)<<endl;
    cout<<"Area of Rectangle: "<<area.calculate(5,10)<<endl;
    cout<<"Area of Circle: "<<area.calculate(3.0)<<endl;
    return 0;
}