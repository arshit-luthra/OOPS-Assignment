#include<iostream>
using namespace std;

class Print {
    public:
void display(int x) {
    cout<<"Integer: "<<x<<endl;
}
void display(double x) {
    cout<<"Double: "<<x<<endl;
}
void display(string x) {
    cout<<"String: "<<x<<endl;
}
};

int main() {
    Print p;
    p.display(5);
    p.display(3.14);
    p.display("Hello, World!");
    return 0;
}
