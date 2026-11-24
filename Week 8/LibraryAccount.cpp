#include <iostream>
using namespace std;

class LibraryAccount
{
    int availableBooks;

public:
    LibraryAccount()
    {
        availableBooks = 5;
    }

    void issueBook(int n)
    {
        try
        {
            if (n > availableBooks)
            {
                throw n;
            }

            availableBooks = availableBooks - n;

            cout << "Books issued successfully!" << endl;
            cout << "Remaining books: " << availableBooks << endl;
        }
        catch (int x)
        {
            cout << "Exception caught: Not enough books available!" << endl;
        }
    }
};

int main()
{
    LibraryAccount l;
    int n;

    cout << "Enter number of books to issue: ";
    cin >> n;

    l.issueBook(n);

    return 0;
}