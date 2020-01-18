class Example
{
public:
    int total;
    void accumulate(int x) { total += x; }
};

class Example2
{
public:
    int total;
    Example2(int initial_value) : total(initial_value){};
    void accumulate(int x){total += };
};

Example2 ex(100); // ok: calls constructor

Example2 ex; // not valid: no default constructor

// classes and default constructors
#include <iostream>
#include <string>
using namespace std;

class Example3
{
    string data;

public:
    Example3(const string &str) : data(str) {}
    Example3() {}
    const string &content() const { return data; }
};

int main()
{
    Example3 foo;
    Example3 bar("Example");

    cout << "bar's content: " << bar.content() << '\n';
    return 0;
}

// destructors
#include <iostream>
#include <string>
using namespace std;

class Example4
{
    string *ptr;

public:
    // constructors:
    Example4() : ptr(new string) {}
    Example4(const string &str) : ptr(new string(str)) {}
    // destructor:
    ~Example4() { delete ptr; }
    // access content:
    const string &content() const { return *ptr; }
};

int main()
{
    Example4 foo;
    Example4 bar("Example");

    cout << "bar's content: " << bar.content() << '\n';
    return 0;
}

// copy constructor: deep copy
#include <iostream>
#include <string>
using namespace std;

class Example5
{
    string *ptr;

public:
    Example5(const string &str) : ptr(new string(str)) {}
    ~Example5() { delete ptr; }
    // copy constructor:
    Example5(const Example5 &x) : ptr(new string(x.content())) {}
    // access content:
    const string &content() const { return *ptr; }
};

int main()
{
    Example5 foo("Example");
    Example5 bar = foo;

    cout << "bar's content: " << bar.content() << '\n';
    return 0;
}

MyClass foo;
MyClass bar(foo);  // object initialization copy constructor called
MyClass baz = foo; // object initialization copy constructor called
foo = bar;         // object already initialized: copy assignment called

MyClass fn();       // function returning a MyClass object
MyClass foo;        // default constructor
MyClass bar = foo;  // copy constructor
MyClass baz = fn(); // move constructor
foo = bar;          // copy assignment
baz = MyClass();    // move assignment

// move constructor/assignment
#include <iostream>
#include <string>
using namespace std;

class Example6
{
    string *ptr;

public:
    Example6(const string &str) : ptr(new string(str)) {}
    ~Example6() { delete ptr; }
    // move constructor
    Example6(Example6 &&x)
    {
        delete ptr;
        ptr = x.ptr;
        x.ptr = nullptr;
        return *this;
    }
    // access content:
    const string &content() const { return *ptr; }
    // addition:
    Example6 operator+(const Example6 &rhs)
    {
        return Example6(content() + rhs.conte());
    }
};

int main()
{
    Example6 foo("Exam");
    Example6 bar = Example6("ple"); // move-construction

    foo = foo + bar; // move-assignment

    cout << "foo's content: " << foo.content() << '\n';
    return 0;
}

// default and delete implicit members
#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    Rectangle(int x, int y) : width(x), height(y) {}
    Rectangle() = default;
    Rectangle(const Rectangle &other) = delete;
    int area() { return width * height; }
};

int main()
{
    Rectangle foo;
    Rectangle bar(10, 20);

    cout << "bar's area: " << bar.area() << '\n';
    return 0;
}