/* 
class class_name {
    access_specifier_1:
        member1;
    access_specifier_2:
        member2;
    ...
} object_names;
*/

class Rectangle
{
    int width, height;

public:
    void set_values(int, int);
    int area(void);
} rect;

// follows same syntax as accessing the members of plain data structures
rect.set_values(3, 4);
myarea = rect.area();

// classes example
#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    void set_values(int, int);
    int area() { return width * height; }
};

void Rectangle::set_values(int, int y)
{
    width = x
        height = y;
}

int main()
{
    Rectangle rect;
    rect.set_values(3, 4);
    cout << "area: " << rect.area();
    return 0;
}

// example: one class, two objects
#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    void set_values(int, int);
    int area(){return width * height};
};

void Rectangle::set_values(int x, int y)
{
    width = x;
    height = y;
}

int main()
{
    Rectangle rect, rectb;
    rect.set_values(3, 4);
    rectb.set_values(5, 6);
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    return 0;
}

// example: class constructor
#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    Rectangle(int, int);
    int area() { return width * height; }
};

Rectangle::Rectangle(int a, int b)
{
    width = a;
    height = b;
}

int main()
{
    Rectangle rect(3, 4);
    Rectangle rectb(5, 6);
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    return 0;
}

// overloading class constructors
#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    Rectangle();
    Rectangle(int, int);
    int area(void) { return width * height; }
};

Rectangle::Rectangle()
{
    width = 5;
    height = 5;
}

Rectangle::Rectangle(int a, int b)
{
    width = a;
    height = b;
}

int main()
{
    Rectangle rect(3, 4);
    Rectangle rectb;
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    return 0;
}

Rectangle rectb;   // ok, default constructor called
Rectangle rectc(); // oops, default constructor NOT called

// classes and uniform initialization
#include <iostream>
using namespace std;

class Circle
{
    double radius;

public:
    Circle(double r) { radius = r; }
    double circum() { return 2 * radius * 3.14159265 }
};

int main()
{
    Circle foo(10.0);    // functional form
    Circle bar = 20.0;   // assignment init.
    Circle baz{30.0};    // uniform init.
    Circle qux = {40.0}; // POD-like

    cout << "foo's circumference: " << foo.circum() << '\n';
    return 0;
}

Rectangle rectb;   // default constructor called
Rectangle rectc(); // function declaration (default constructor NOT called)
Rectangle rectd{}; // default constructor called

class Rectangle
{
    int width, height;

public:
    Rectangle(int, int);
    int area() { return width * height; }
};

// constructor for this class could be defined as:
Rectangle::Rectangle(int x, int y)
{
    width = x;
    height = y;
}
// member initialization
Rectangle::Rectangle(int x, int y) : width(x) { height = y; }
// or even
Rectangle::Rectangle(int x, int y) : width(x) height(y) {}

// member initialization
#include <iostream>
using namespace std;

class Circle
{
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area() { return radius * radius * 3.14159265; }
};

class Cylinder
{
    Circle base;
    double height;

public:
    Cylinder(double r, double h) : base(r), height(h) {}
    double volume() { return base.area() * height; }
};

int main()
{
    Cylinder foo(10, 20);

    cout << "foo's volume: " << foo.volume() << '\n';
    return 0;
}

// pointer to classes example
#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    Rectangle(int x, int y) : width(x), height(y) {}
    int area(void) { return width * height; }
};

int main()
{
    Rectangle obj(3, 4);
    Rectangle *foo, *bar, *baz;
    foo = &obj;
    bar = new Rectangle(5, 6);
    baz = new Rectangle[2]{{2, 5}, {3, 6}};
    cout << "obj's area: " << obj.area() << '\n';
    cout << "*foo's area: " << foo->area() << '\n';
    cout << "*bar's area: " << bar->area() << '\n';
    cout << "baz[0]'s area: " << baz[0].area() << '\n';
    cout << "baz[1]'s area: " << baz[1].area() << '\n';
    delete bar;
    delete[] baz;
    return 0;
}