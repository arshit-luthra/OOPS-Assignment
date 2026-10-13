#include<iostream>
using namespace std;

class Calculator {
public:
    void sum(int a, int b) {
        cout<<"Sum: "<<a+b<<endl;
    }
    void sum(int a, int b, int c) {
        cout<<"Sum: "<<a+b+c<<endl;
    }
    void sum(double a, double b) {
        cout<<"Sum: "<<a+b<<endl;
    }
};
int main() {
    Calculator calc;
    calc.sum(10,20);
    calc.sum(10,20,30);
    calc.sum(10.5,20.5);
    return 0;
}