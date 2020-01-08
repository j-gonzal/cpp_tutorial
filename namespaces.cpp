int foo; // global variable

int some_function()
{
    int bar; // local variable
    bar = 0;
}

int other_function()
{
    foo = 1; // ok: foo is a global variable
    bar = 2; // wrong: bar is not visible in this function
}

int some_function()
{
    int x;
    x = 0;
    double x; // wrong: name already used in this scope
    x = 0.0;
}

// inner block scopes
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    {
        int x;  // ok, inner scope.
        x = 50; // sets value to inner x
        y = 50; // sets value to outer (y)
        cout << "inner block:\n";
        cout << "x: " << x << '\n';
        cout << "y: " << y << '\n';
    }
    cout << "outer block:\n";
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
    return 0;
}

namespace myNamespace
{
named_entities
}

myNamespace::a
    myNamespace::b

// namespaces
#include <iostream>
    using namespace std;

namespace foo
{
int value() { return 5; }
} // namespace foo

namespace bar
{
const double pi = 3.1416;
double value() { return2 *pi; }
} // namespace bar

int main()
{
    cout << foo::value() << '\n';
    cout << bar::value() << '\n';
    cout << bar::pi << '\n';
    return 0;
}

namespace foo
{
int a;
}
namespace bar
{
int b;
}
namespace foo
{
int c;
}

// using
#include <iostream>
using namespace std;

namespace first
{
int x = 5;
int y = 10;
} // namespace first

namespace second
{
double x = 3.1416;
double y = 2.7183;
} // namespace second

int main()
{
    using first::x;
    using second::y;
    cout << x << '\n';
    cout << y << '\n';
    return 0;
}

// using
#include <iostream>
using namespace std;

namespace first
{
int x = 5;
int y = 10;
} // namespace first

namespace second
{
double x = 3.1416;
double y = 2.7183;
} // namespace second

int main()
{
    using namespace first;
    cout << x << '\n';
    cout << y << '\n';
    cout << second::x << '\n';
    cout << second::y << '\n';
    return 0;
}

// using namespace example
#include <iostream>
using namespace std;

namespace first
{
int x = 5;
}

namespace second
{
double x = 3.1416;
}

int main()
{
    {
        using namespace first;
        cout << x << '\n';
    }
    {
        using namespace second;
        cout << x << '\n';
    }
    return 0;
}

// static vs automatic storage
#include <iostream>
using namespace std;

int x;

int main()
{
    cout << x << '\n';
    cout << y << '\n';
    return 0;
}
