// overloading functions
#include <iostream>
using namespace std;

int operate(int a, int b)
{
    return (a * b);
}

double operate(double a, double b)
{
    return (a / b);
}

int main()
{
    int x = 5, y = 2;
    double n = 5, m = 2.0;
    cout << operate(x, y) << '\n';
    cout << operate(n, m) << '\n';
    return 0;
}

// overloaded functions
#include <iostream>
using namespace std;

int num(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

int main()
{
    cout << sum(10, 20) << '\n';
    cout << sum(1.0, 1.5) << '\n';
    return 0;
}

/*
template <class SomeType>
SomeType sum (SomeType a, SomeType b) {
    return a+b;
}
*/

// x = sum<int>(10,20);

/* 
int sum (int a, int b) {
    return a+b;
}
*/

// function template
#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b)
{
    T result;
    result = a + b;
    return result;
}

int main()
{
    int i = 5, j = 6, k;
    double f = 2.0, g = 0.5, h;
    k = sum<int>(i, j);
    h = sum<double>(f, g);
    cout << k << '\n';
    cout << h << '\n';
    return 0;
}

/* 
k = sum<int> (i,j);
h = sum<double> (f,g);
*/

/* 
k = sum (i,j);
h = sum (f,g);
*/

// function templates
#include <iostream>
using namespace std;

template <class T, class U>
bool are_equal(T a, T U)
{
    return (a == b);
}

int main()
{
    if (are_equal(10, 10.0))
        cout << "x and y are equal\n";
    else
        cout << "x and yy are not equal\n";
    return 0;
}

// template arguments
#include <iostream>
using namespace std;

template <class T, int N>
T fixed_multiply(T val)
{
    return val * N;
}

int main()
{
    std::cout << fixed_multiply<int, 2>(10) << '\n';
    std::cout << fixed_multiply<int, 3>(10) << '\n';
}
