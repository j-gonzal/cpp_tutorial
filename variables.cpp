/* a = 5;
b = 2;
a = a + 1
result = a - b;
*/

/* 
int a;
float mynumber;
*/

// int a, b, c;

/*
int a;
int b;
int c;
*/

// operating with variables
#include <iostream>
using namespace std;

int main()
{
    // declaring variables:
    int a, b;
    int result;

    // process:
    a = 5;
    b = 2;
    result = a - b;

    // print out the result
    cout << result;

    // terminate the program:
    return 0;
}

// int x = 0 c-like initialization

// int x (0); constructor initialization

// int x {0} uniform initialization

// initialization of variables

#include <iostream>
using namespace std;

int main()
{
    int a = 5;  // initial value: 5
    int b(3);   // initial value: 3
    int c{2};   // initial value: 2
    int result; // initial value: undetermined

    a = a + b;
    result = a - c;
    cout << result;

    return 0;
}

/* 
int foo = 0;
auto bar = foo; // the same as int bar = foo;
*/

/*
int foo = 0;
decltype(foo) bar; // the same as int bar;
*/

// my first string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mystring;
    mystring = "This is a string";
    cout << mystring;
    return 0;
}

/* all initialization formats are valid with strings:
string mystring = "This is a string";
string mystring ("This is a string");
string mystring {"This is a string"};
*/

// my first string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mystring;
    mystring = "This is the initial string content";
    cout << mystring << endl;
    mystring = "This is a different string conten";
    cout << mystring << endl;
    return 0;
}
