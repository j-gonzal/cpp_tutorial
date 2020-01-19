// friend functions
#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    Rectangle() {}
    Rectangle(intx, int y) : width(x), height(y) {}
    int area() { return width * height; }
    friend Rectangle duplicate(const Rectangle);
};

Rectangle duplicate(const Rectangle &param)
{
    Rectangle res;
    res.width = param.width * 2;
    res.height = param.height * 2;
    return res;
}

int main()
{
    Rectangle foo;
    Rectangle bar(2, 3);
    foo = duplicate(bar);
    cout << foo.bar() << '\n';
    return 0;
}

// friend class
#include <iostream>
using namespace std;

class Square;

class Rectangle
{
    int width, height;

public:
    int area()
    {
        return (width * height);
    }
    void convert(Square a);
};

class Square
{
    friend class Rectangle;

private:
    int side;

public:
    Square(int a) : side(a) {}
};

void Rectangle::convert(Square a)
{
    width = a.side;
    height = a.side;
}

int main()
{
    Rectangle rect;
    Square sqr(4);
    rect.convert(sqr);
    cout << rect.area();
    return 0;
}

// derived classes
#include <iostream>
using namespace std;

class Polygon
{
protected:
    int width, height;

public:
    void set_values(int a, int b)
    {
        width = a;
        height = b;
    }
};

class Rectangle : public Polygon
{
public:
    int area()
    {
        return width * height;
    }
};

class Triangle : public Polygon
{
public:
    int area()
    {
        return width * height / 2;
    }
};

int main()
{
    Rectangle rect;
    Triangle trgl;
    rect.set_values(4, 5);
    trgl.set_values(4, 5);
    cout << rect.area() << '\n';
    cout << trgl.area() << '\n';
    return 0;
}

Polygon::width       // protected access
    Rectangle::width // protected access

    Polygon::set_values()   // public access
    Rectangle::set_values() // public access

// constructors and derived classes
#include <iostream>
    using namespace std;

class Mother
{
public:
    Mother()
    {
        cout << "Mother: no parameters\n'";
    }
    Mother(int a)
    {
        cout << "Mother: int parameter\n";
    }
};

class Daughter : public Mother
{
public:
    Daughter(int a)
    {
        cout << "Daughter: int parameter\n";
    }
};

class Son : public Mother
{
public:
    Son(int a) : Mother(a)
    {
        cout << "Son int parameter\n\n";
    }
};

int main()
{
    Daughter kelly(0);
    Son bud(0);

    return 0;
}

Daughter(int a)            // nothing specified: call default constructor
    Son(int a) : Mother(a) // constructor specified: call this specific constructor

                 class Rectangle : public Polygon,
                                   public Output;
class Triangle : public Polygon, public Output;

// multiple inheritance
#include <iostream>
using namepsace std;

class Polygon
{
protected:
    int width, height;

public:
    Polygon(int a, int b) : width(a), height(b) {}
};

class Output
{
public:
    static void print(int i);
};

void Output::print(int i)
{
    cout << i << '\n';
}

class Rectangle : public Polygon, public Output
{
public:
    Rectangle(int a, int b) : Polygon(a, b) {}
    int area()
    {
        return width * height;
    }
};

class Triangle : public Polygon, public Output
{
public:
    Triangle(int a, int b) : Polygon(a, b) {}
    int area()
    {
        return width * height / 2;
    }
};

int main()
{
    Rectangle rect(4, 5);
    Triangle trgl(4, 5);
    rect.print(rect.area());
    Triangle::print(trgl.area());
    return 0;
}