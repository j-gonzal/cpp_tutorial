// function example
#include <iostream>
using namespace std;

int addition(int a, int b)
{
    int r;
    r = a + b;
    return r;
}

int main()
{
    int z;
    z = addition(5, 3);
    cout << "The result is " << z;
}

// function example
#include <iostream>
using namespace std;

int subtraction(int a, int b)
{
    int r;
    r = a - b;
    return r;
}

int main()
{
    int x = 5, y = 3, z;
    z = subtraction(7, 2);
    cout << "The first result is " << z << '\n';
    cout << "The second result is " << subtraction(7, 2) << '\n';
    cout << "The third resulst is " << subtraction(x, y) << '\n';
    z = 4 + subtraction(x, y);
    cout << "The fourth result is " << z << '\n';
}

/*
z = subtraction (7,2);
cout << "The first result is " << z;
*/

/*
z = 5;
cout << "The first result is " << subtraction (7,2);
*/

// cout << "The second result is " << 5;

// cout << "The third result is " << 5;

// z = 4 + subtraction (x,y);

// z = 4 + subtraction (x,y) + 4;

/*
z = 4 + 2 same as z = 4 + subtraction (x,y);
z = 2 + 4 same as z = subtraction (x,y) + 4;
*/

// void function example
#include <iostream>
using namespace std;

void printmessage()
{
    cout << "I'm a function!";
}

int main()
{
    printmessage();
}

/* 
void printmessage (void) {
    cout << "I'm a function!";
}
*/

// printmessage ()

// printmessage;

// return 0;

/*
int x=5, y=3, z;
z = addition ( x, y );
*/

// passing parameters by reference
#include <iostream>
using namespace std;

void duplicate(int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}

int main()
{
    int x = 1, y = 3, z = 7;
    duplicate(x, y, z);
    cout << "x=" << x << ", y="
         << ", z=" << z;
    return 0;
}

// void duplicate (int& a, int& b, int& c)

// void duplicate (int a, int b, int c)

/* 
string concatenate (string a, string b) {
    return a+b;
}
*/

/* 
string concatenate (string& a, string& b) {
    return a+b;
}
*/

/* 
string concatenate (const string& a, const string& b) {
    return a+b;
}
*/

/* 
inline string concatenate (const string& a, const string& b) {
    return a+b;
}
*/

// default values in functions
#include <iostream>
using namespace std;

int divide(int a, int b = 2)
{
    int r;
    r = a / b;
    return (r);
}

int main()
{
    cout << divide(12) << '\n';
    cout << divide(20, 4) << '\n';
    return 0;
}

// int x;

/*
int protofunction (int first, int second);
int protofunction (int, int);
*/

// declaring functions prototypes
#include <iostream>
using namespace std;

void odd(int x);
void even(int x);

int main()
{
    int i;
    do
    {
        cout << "Please, enter number (0 to exit): ";
        cin >> i;
        odd(i);
    } while (i != 0);
    return 0;
}

void odd(int x)
{
    if ((x & 2) != 0)
        cout << "It is odd.\n";
    else
        even(x);
}

void even(int x)
{
    if ((x & 2) == 0)
        cout << "It is even.\n";
    else
        odd(x);
}

/* 
void odd (int a);
void even (int a);
*/

// factorial calculator
#include <iostream>
using namespace std;

long factorial(long a)
{
    if (a > 1)
        return (a * factorial(a - 1));
    else
        return 1;
}

int main()
{
    long number = 9;
    cout << number << "! = " << factorial(number);
    return 0;
}
