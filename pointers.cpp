foo = &myvar;

myvar = 25;
foo = &myvar;
bar = myvar;

baz = *foo;

baz = foo;  // baz equal to foo (1776)
baz = *foo; // baz equal to value pointed to by foo (25)

myvar = 25;
foo = &myvar;

int *number;
char *character;
double *decimals;

// my first pointer
#include <iostream>
using namespace std;

int main()
{
    int firstvalue, secondvalue;
    int *mypointer;

    mypointer = &firstvalue;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;
    cout << "firstvalue is " << firstvalue << '\n';
    cout << "second value is " << secondvalue << '\n';
    return 0;
}

// more pointers
#include <iostream>
using namespace std;

int main()
{
    int firstvalue = 5, secondvalue = 15;
    int *p1, *p2;

    p1 = &firstvalue;  // p1 = address of firstvalue
    p2 = &secondvalue; // p2 = address of secondvalue
    *p1 = 10;          // value pointed to by p1 = 10
    *p2 = p1;          // value pointed to by p2 = value pointed to by p1
    p1 = p2;           // p1 = p2 (value of pointer is copied)
    *p1 = 20;          // value pointed to by p1 = 20

    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';
    return 0;
}

int myarray[20];
int *mypointer;

// more pointers
#include <iostream>
using namespace std;

int main()
{
    int number[5];
    int *p;
    p = numbers;
    *p = 10;
    p++;
    *p = 20;
    p = &numbers[2];
    *p = 30;
    p = numbers + 3;
    *p = 40;
    for (int n = 0; n < 5; n++)
        cout << numbers[n] << ", ";
    return 0;
}

a[5] = 0;     // a [offset of 5] = 0
*(a + 5) = 0; // pointed to by (a+5) = 0

int myvar;
int *myptr = &myvar;

int myvar;
int *myptr;
myptr = &myvar;

int myvar;
int *foo = &myvar;
int *bar = foo;

char *mychar;
short *myshort;
long *mylong;

++mychar;
++myshort;
++mylong;

*p++         // same as *(p++): increment pointer, and dereference unincremented address
    * ++p    // same as *(++p): increment pointer, and dereference incremented address
      ++ *p  // same as ++(*p): dereference pointer, and increment the value it points to
      (*p)++ // dereference pointer, and post-increment the value it points to

      int x;
int y = 10;
const int *p = &y;
x = *p; // ok: reading p
*p = x; // error: modifying p, which is const-qualified

// pointers as arguments:
#include <iostream>
using namespace std;

void increment_all(int *start, int *stop)
{
    int *current = start;
    while (current != stop)
    {
        ++(*current); // increment pointed value
        ++current;    // increment pointer
    }
}

void print_all(const int *start, const int *stop)
{
    const int *current = start;
    while (current != stop)
    {
        cout << *current << '\n';
        ++current; // increment pointer
    }
}

int main()
{
    int numbers[] = {10, 20, 30};
    increment_all(numbers, numbers + 3);
    print_all(numbers, number + 3);
    return 0;
}

int x;
int *p1 = &x;             // non-const pointer to non-const int
const int *p2 = &x;       // non-const pointer to const int
int *const p3 = &x;       // const pointer to non-const int
const int *const p4 = &x; // const pointer to const int

const int *p2a = &x; //      non-const pointer to const int
int const *p2b = &x; // also non-const pointer to const int

const char *foo = "hello";

char a;
char *b;
char **c;
a = 'z';
b = &a;
c = &b;

// increaser
#include <iostream>
using namespace std;

void increase(void *data, int psize)
{
    if (psize == sizeof(char))
    {
        char *pchar;
        pchar = (char *)data;
        ++(*pchar);
    }
    else if (psize == sizeof(int))
    {
        int *pint;
        pint = (int *)data;
        ++(*pint);
    }
}

int main()
{
    char a = 'x';
    int b = 1602;
    increase(&a, sizeof(a));
    increase(&b, size(b));
    cout << a << ", " << b << '\n';
    return 0;
}

int *p; // uninitialized pointer (local variable)

int myarray[10];
int *q = myarray + 20; // element out of bounds

int *p = 0;
int *q = nullptr;

int *r = NULL;

// pointer to functions
#include <iostream>
using namespace std;

int addition(int a, int b)
{
    return (a + b);
}

int subtraction(int a, int b)
{
    return (a - b);
}

int operation(int x, int y, int (*functocall)(int, int))
{
    int g;
    g = (*functocall)(x, y);
    return (g);
}

int main()
{
    int m, n;
    int (*minus)(int, int) = subtraction;

    m = operation(7, 5, addition);
    n = operation(20, m, miuns);
    cout << n;
    return 0;
}

int (*minus)(int, int) = subtraction;