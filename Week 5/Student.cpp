#include<iostream>
using namespace std;

class Student {
    public:
      void result(int a) {
        cout << "Marks in one subject: " << a << endl;
    }
    void result(int a, int b) {
        cout << "Average of two subjects: " << (a + b) / 2.0 << endl;
    }
    void result(int a, int b, int c) {
        cout << "Average of three subjects: " << (a + b + c) / 3.0 << endl;
    }
};

int main() {
    Student s;
    s.result(80);
    s.result(75, 85);
    s.result(70, 80, 90);
    return 0;
}
