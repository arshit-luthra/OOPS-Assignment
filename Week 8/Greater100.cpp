#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    try
    {
        if (num < 0)
        {
            throw num;
        }
        else if (num > 100)
        {
            throw "Number is greater than 100!";
        }

        cout << "Valid number: " << num << endl;
    }
    catch (int x)
    {
        cout << "Exception caught: Number cannot be negative!" << endl;
    }
    catch (const char *msg)
    {
        cout << "Exception caught: " << msg << endl;
    }

    return 0;
}