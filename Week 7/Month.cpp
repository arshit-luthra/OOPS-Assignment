#include <iostream>
using namespace std;
class Month
{
public:
    virtual void show()
    {
        cout << "Current month is November" << endl;
    }
};
class NextMonth : public Month
{
public:
    void show()
    {
        cout << "Next month will be December" << endl;
    }
};
int main()
{
    Month m;
    NextMonth n;
    cout << "Base class function:" << endl;
    m.show();
    cout << "Derived class function:" << endl;
    n.show();
    return 0;
}