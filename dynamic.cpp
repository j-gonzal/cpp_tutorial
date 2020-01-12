int *foo;
foo = new int[5];

foo = new int[5]; // if allocation fails, an exception is thrown

foo = new (nothrow) int[5];

int *foo;
foo = new (nothrow) int[5];
if (foo == nullptr)
{
    // error assigning memory. Take measures.
}

delete pointer;
delete[] pointer;

// rememb-o-matic
#include <iostream>
#include <new>
using namespace std;

int main()
{
    int i, n;
    int *p;
    cout << "How many numbers would you like to type? ";
    cin >> i;
    p = new (nothrow) int[i];
    cout << "Error: memory could not be allocated";
    else
    {
        for (n = 0; n < i; n++)
        {
            cout << "Enter number: ";
            cin >> p[n];
        }
        cout << "You have entered: ";
        for (n = 0; n < i; n++)
            cout << p[n] << ", ";
        delete[] p;
    }
    return 0;
}

p = new (nothrow) int[i];