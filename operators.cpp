// a = 5;

// x = y;

// assignment operator
#include <iostream>
using namespace std;

int main()
{
    int a, b; // a:?, b:?
    a = 10;   // a:10, b:?
    b = 4;    // a:10, b:4
    a = b;    // a:4, b:4
    b = 7;    // a:4, b:7

    cout << "a:";
    cout << a;
    cout << " b:";
    cout << b;
}

// y = 2 + (x=5);

// x = 5;
// y = 2 + x;

// x = y = z = 5;

//compound assignment operators
#include <iostream>
using namespace std;

int main()
{
    int a, b = 3;
    a = b;
    a += 2; // equivalent to a=a+2
    cout << a;
}

// ++x;
// x+=1;
// x=x+1

// (7 == 5) evaluates to false
// (5 > 4) evaluates to true
// (3 != 2) evaluates to true
// (6 >= 6) evalutes to true
// 5 > 5) evaluates to false

// (a == 5) evaluates to false, since a is not equal to 5
// (a*b> >= c) evaluates to true, since (2*3 >=6) is true
// (b+4 > a*c) evalutes to false, since (3+4 > 2*6) is false
// ((b=2) == a) evaluates to true

// !(5 == 5) evaluates to false because the expression at its right (5 == 5) is true
// !(6 <= 4) evaluates to true because (6 <= 4) would be false
// !true evaluates to false
// !false evaluates to true

// ( (5 == 5) && (3 > 6) ) evaluates to false ( true && false )
// ( (5 == 5) && (3 > 6) ) evaluates to true ( true || false )

// if ( (i<10) && (++i<n) ) { /*...*/} note that the condition increments i

// 7==5 ? 4 : 3 evaluates to 3, since 7 is not equal to 5.
// 7==5+2 ? 4 : 3 evaluates to 4, since 7 is equal to 5+2.
// 5>3 ? a : b evaluates to the value of a, since 5 is greater than 3.
// a>b ? a : b evaluates to whichever is greater, a or b.

// conditional operator
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    a = 2;
    b = 7;
    c = (a > b) ? a : b;

    cout << c << '\n';
}

// a = (b=3, b+2);

// int i;
// float f = 3.14;
// i = (int) f;

// i  int (f);

// x = sizeof (char);

// x = 5 + 7 % 2;

// x = 5 + (7 % 2 ); x = 6 (same as without parenthesis)
// x = (5 + 7) % 2; x = 0