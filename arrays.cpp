int foo[5];

int foo[5] = {16, 2, 77, 40, 12071};

int bar[5] = {10, 20, 30};

int baz[5] = {};

int foo[] = {16, 2, 77, 40, 12071};

int foo[] = {10, 20, 30};
int foo[]{10, 20, 30}; // both these statements are equal

foo[2] = 75;

x = foo[2];

int foo[5];  // declaration of a new array.
foo[2] = 75; // access to an element of the array.

foo[0] = a;
foo[a] = 75;
b = foo[a + 2];
foo[foo[a]] = foo[2] + 5;

// arrays example
#include <iostream>
using namespace std;

int foo[] = {16, 2, 77, 40, 12071};
int n, result = 0;

int main()
{
    for (n = 0; n < 5; ++n)
    {
        result += foo[n];
    }
    cout << result;
    return 0;
}

int jimmy[3][5];

jimmy[1][3] // way to represent second element verticall and fourth horizontally

    char century[100][365][24][60][60];

int jimmy[3][5]; // is equivalent to
int jimmy[15];   // (3 * 5 = 15)

void procedure(int arg[])

    int myarray[40];

procedure(myarray); // write a call like this

// arrays as parameters
#include <iostream>
using namespace std;

void printarray(int arg[], int length)
{
    for (int n = 0; n < length; ++n)
        cout << arg[n] << ' ';
    cout << '\n';
}

int main()
{
    int firstarray[] = {5, 10, 15};
    int secondarray[] = {2, 4, 6, 8, 10};
    printarray(firstarray, 3);
    printarray(secondarray, 5);
}

// base_type[][depth][depth]

// void procedure (int myarray[][3][4]) function with multidimensional array

// C++ provides an alternative array type as a standard container #include <array>