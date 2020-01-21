short a = 2000;
int b;
b = a;

// implicit convserion of classes:
#include <iostream>
using namespace std;

class A
{
};

class B
{
public:
    // conversion from A (constructor):
    B(const A &x) {}
    // conversion from A (assignment):
    B &operator=(const A &x) { return *this; }
    // conversion to A (type-cast operator)
    operator A() { return A(); }
};

int main()
{
    A foo;
    B bar = foo; // calls constructor
    bar = foo;   // calls assignment
    foo = bar;   // calls type-cast operator
    return 0;
}

void fn(B arg) {}

fn(foo);

// explicit:
#include <iostream>
using namespace std;

class A
{
};

class B
{
public:
    explicit B(const A &x) {}
    B &operator=(const A &x) { return *this; }
    operator A() { return A(); }
};

void fn(B x) {}

int main()
{
    A foo;
    B bar(foo);
    bar = foo;
    foo = bar;

    // fn (foo); // not allowed for explicit ctor.
    fn(bar);

    return 0;
}

double x = 10.3;
int y;
y = int(x); // functional notation
y = (int)x; // c-like cast notation

// class type-casting
#include <iostream>
using namespace std;

class Dummy
{
    double i, j;
};

class Addition
{
    int x, y;

public:
    Addition(int a, int b)
    {
        x = a;
        y = b;
    }
    int result() { return x + y; }
};

int main()
{
    Dummy d;
    Addition *padd;
    padd = (Addition *)&d;
    cout << padd->result();
}

// dynamic_cast
#include <iostream>
#include <exectuion>
using namespace std;

class Base
{
    virtual void dummy() {}
};
class Dervied : public Base
{
    int a;
};

int main()
{
    try
    {

        Base *pba = new Derived;
        Base *pbb = new Base;
        Derived *pd;

        pd = dynamic_cast<Derived *>(pba);
        if (pd == 0)
            cout << "Null pointer on first type-cast.\n";

        pd = dynamic_cast<Derived *>(pbb);
        if (pd == 0)
            cout << "Null pointer on second type-cast.\n";
    }
    catch (exception &e)
    {
        cout << "Exception: " << e.what();
    }
    return 0;
}

// const_cast
#include <iostream>
using namespace std;

void print(char *str)
{
    cout << str << '\n';
}

int main()
{
    const char *c = "sample text";
    print(const_cast<char *>(c));
    return 0;

// typeid
#include <iostream>
#include <typeinfo>
    using namespace std;

    int main()
    {
        int *a, b;
        a = 0;
        b = 0;
        if (typeid(a) != typeid(b))
        {
            cout << "a and b are of different types:\n";
            cout << "a is: " << typeid(a).name() << '\n';
            cout << "b is: " << typeid(b).name() << '\n';
        }
        return 0;
    }

// typeid, polymorphic class
#include <iostream>
#include <typeinfo>
#include <exception>
    using namespace std;

    class Base
    {
        virtual void f() {}
    };
    class Derived : public Base
    {
    };

    int main()
    {
        try
        {
            Base *a = new Base;
            Base *b = new Derived;
            cout << "a is: " << typeid(a).name() << '\n';
            cout << "b is: " << typeid(b).name() << '\n';
            cout << "*a is: " << typeid(*a).name() << '\n';
            cout << "*b is: " << typeid(*b).name() << '\n';
        }
        catch (exception &e)
        {
            cout << "Exception: " << e.what() << '\n';
        }
        return 0;
    }