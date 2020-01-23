#define TABLE_SIZE 100
int table1[TABLE_SIZE];
int table2[TABLE_SIZE];

int table1[100];
int table2[200];

// function macro
#include <iostream>
using namespace std;

#define getmax(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    int x = 5, y;
    y = getmax(x, 2);
    cout << y << endl;
    cout << getmax(7, x) << endl;
    return 0;
}

#define TABLE_SIZE 100
int table1[TABLE_SIZE];
#undef TABLE_SIZE
#define TABLE_SIZE 200
int table2[TABLE_SIZE];

int table1[100];
int table2[200];

#ifdef TABLE_SIZE
int table[TABLE_SIZE];
#endif

#ifndef TABLE_SIZE
#define TABLE_SIZE 100
#endif
int table[TABLE_SIZE];

#if TABLE_SIZE > 200
#undef TABLE_SIZE
#define TABLE_SIZE 200

#elif TABLE_SIZE < 50
#undef TABLE_SIZE
#define TABLE_SIZE 50

#else
#undef TABLE_SIZE
#define TABLE_SIZE 100
#endif

int table[TABLE_SIZE];

#if defined ARRAY_SIZE
#define TABLE_SIZE ARRAY_SIZE
#elif !defined BUFFER_SIZE
#define TABLE_SIZE 128
#else
#define TABLE_SIZE BUFFER_SIZE
#endif

#line 20 "assigning variable"
int a ? ;

#ifndef __cplusplus
#error A C++ compiler is required!
#endif

#include <header>
#include "file"

// standard macro names
#include <iostream>
using namespace std;

int main()
{
    cout << "This is the line number " << __LINE__;
    cout << " of file " << __FILE__ << ".\n";
    cout << "Its compilation began " << __DATE__;
    cout << " at " << __TIME__ << ".\n";
    cout << "The compiler gives a __cplusplus value of " << __cplusplus;
    return 0;
}