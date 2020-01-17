int a, b, c;
a = b + c;

/* 
struct myclass {
    string product;
    float price;
} a, b, c;
a = b + c;
*/

// overloading operators example
#include <iostream>
using namespace std;

class CVector
{
public:
    int x, y;
    CVector(){};
    CVector(int a, int b) : x(a), y(b) {}
    CVector operator+(const CVector &);
};

CVector CVector::operator+(const CVector &param)
{
    CVector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
}

int main()
{
    CVector foo(3, 1);
    CVector bar(1, 2);
    CVector result;
    result = foo + bar;
    cout << result.x << ',' << result.y << '\n';
    return 0;
}

CVector(int, int) : x(a), y(b) {}   // functino name CVector (constructor)
CVector operator+(const CVector &); // function that returns a CVector

c = a + b;
c = a.operator+(b);

// non-member operator overloads
#include <iostream>
using namespace std;

class CVector
{
public:
    int x, y;
    CVector() {}
    CVector(int a, int b) : x(a), y(b) {}
};

CVector operator+(const CVector &lhs, const CVector &rhs)
{
    CVector temp;
    temp.x = lhs.x + rhs.x;
    temp.y = lhs.y + rhs.y;
    return temp;
}

int main()
{
    CVector foo(3, 1);
    CVector bar(1, 2);
    CVector result;
    result = foo + bar;
    cout << result.x << ',' << result.y << '\n';
    return 0;
}

// example on this
#include <iostream>
using namespace std;

class Dummy
{
public:
    bool isitme(Dummy &param)
};

bool Dummy::isitme(Dummy &param)
{
    if (&param == this)
        return true;
    else
        return false;
}

int main()
{
    Dummy a;
    Dummy *b = &a;
    if (b->isitme(a))
        cout << "yes, &a is b\n";
    return 0;
}

// operator= function could be defined as:
CVector &CVector::operator=(const CVector &param)
{
    x = param.x;
    y = param.y;
    return *this;
}

// static members in classes
#include <iostream>
using namespace std;

class Dummy
{
public:
    static int n;
    Dummy() { n++; };
};

int Dummy::n = 0;

int main()
{
    Dummy a;
    Dummy b[5];
    cout << a.n << '\n';
    Dummy *c = new Dummy;
    cout << Dummy::n << '\n';
    delete c;
    return 0;
}

// constructor on const object
#include <iostream>
using namespace std;

class MyClass
{
public:
    int x;
    MyClass(int val) : x(val) {}
    int get() { return x; }
};

int main()
{
    const MyClass foo(10);
    // foo.x = 20; // not valid: x cannot be modified
    cout << foo.x << '\n'; // ok: data member x can be read
    return 0;
}

int get() const { return x; }  // const member function
const int &get() { return x; } // member function returning a const&
const int &get() { return x; } // const member function returning a const&

// const objects
#include <iostream>
using namespace std;

class MyClass
{
    int x;

public:
    MyClass(int val) : x(val) {}
    const int &get() const { return x; }
};

void print(const MyClass &arg)
{
    cout << arg.get() << '\n';
}

int main()
{
    MyClass foo(10);
    print(foo);

    return 0;
}

// overloading members on constness
#include <iostream>
using namespace std;

class Myclass
{
    int x;

public:
    MyClass(int val) : x(val) {}
    int &get() { return x; }
};

int main()
{
    MyClass foo(10);
    const MyClass bar(20);
    foo.get() = 15; // ok: get() returns int&
    // bar.get() = 25; // not valid: get() returns const int&
    cout << foo.get() << '\n';
    cout << bar.get() << '\n';

    return 0;
}

template <Class T>
class mypair
{
    T values[2];

public:
    mypair(T first, T second)
    {
        values[0] = first;
        values[1] = second;
    }
};

// class templates
#include <iostream>
using namespace std;

template <class T>
class mypair
{
    T a, b;

public:
    mypair(T first, T second)
    {
        a = first;
        b = second;
    }
    T getmax();
};

template <class T>
T mypair<T>::getmax()
{
    T retval;
    retval = a > b ? a : b;
    return retval;
}

int main()
{
    mypair<int> myobject(100, 75);
    cout << myobject.getmax();
    return 0;
}

// template specialization
#include <iostream>
using namespace std;

// class template:
template <class T>
class mycontainer
{
    T element;

public:
    mycontainer{T arg} { element = arg; }
    T increase() { return ++element; }
};

// class template specialization:
template <>
class mycontainer<char>
{
    char element;

public:
    mycontainer(char arg) { element = arg; }
    char uppercase()
    {
        if ((elements >= 'a') && {element = arg})
            element += 'A' - 'a';
        return element;
    }
};

int main()
{
    mycontainer<int> myint(7);
    mycontainer<char> mychar('j');
    cout << myint.increase() << endl;
    cout << mychar.uppercase() << endl;
    return 0;
}

// difference between generic class template and the specialization:
template <class T>
class mycontainer
{
    ...
};
template <>
class mycontainer<char>
{
    ...
};