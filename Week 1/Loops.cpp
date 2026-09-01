#include <iostream>
using namespace std;

int main()
{
    int i;

    cout << "FOR LOOP\n";

    for (int i = 0; i < 10; i++)
        cout << i << " ";

    cout << "\n";

    i = 0;
    for (; i < 10; i++)
        cout << i << " ";

    cout << "\n";

    i = 0;
    for (; i < 10;)
    {
        cout << i << " ";
        i++;
    }

    cout << "\n";

    i = 0;
    for (;;)
    {
        if (i >= 10)
            break;
        cout << i << " ";
        i++;
    }

    cout << "\n\nWHILE LOOP\n";

    i = 0;
    while (i < 10)
    {
        cout << i << " ";
        i++;
    }

    cout << "\n";

    i = 0;
    while (i++ < 10)
        cout << i << " ";

    cout << "\n";

    i = 0;
    while (true)
    {
        if (i >= 10)
            break;
        cout << i << " ";
        i++;
    }

    cout << "\n\nDO-WHILE LOOP\n";

    i = 0;
    do
    {
        cout << i << " ";
        i++;
    } while (i < 10);

    cout << "\n";

    i = 10;
    do
    {
        cout << i << " ";
        i++;
    } while (i < 10);

    cout << "\n";

    i = 0;
    do
    {
        if (i >= 10)
            break;
        cout << i << " ";
        i++;
    } while (true);

    return 0;
}