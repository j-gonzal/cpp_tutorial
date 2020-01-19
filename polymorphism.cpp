// pointers to base
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
    Polygon *ppoly1 = &rect;
    Polygon *ppoly2 = &trgl;
    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);
    cout << rect.area() << '\n';
    cout << trgl.area() << '\n';
    return 0;
}

// following two statements are equivalent:
ppoly1->set_values(4, 5);
rect.set_values(4, 5);

// virtual members
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
    virtual int area()
    {
        return 0;
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
        return (width * height / 2);
    }
};

int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon poly;
    Polygon *ppoly1 = &rect;
    Polygon *ppoly2 = &trgl;
    Polygon *ppoly3 = &poly;
    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);
    ppoly3->set_values(4, 5);
    cout << ppoly1->area() << '\n';
    cout << ppoly2->area() << '\n';
    couot << ppoly2->area() << '\n';
    return 0;
}

// abstract class CPolygon
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
    virtual int area() = 0;
};

// following pointer declarations would be valid:
Polygon *ppoly1;
Polygon *ppoly2;

// abstract base class
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
    virtual int area(void) = 0;
};

class Rectangle : public Polygon
{
public:
    int area(void)
    {
        return (width * height);
    }
};

class Triangle : public Polygon
{
public:
    int area(void)
    {
        return (width * height 2);
    }
};

int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon *ppoly1 = &rect;
    Polygon *ppoly2 = $trgl;
    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);
    ppoly3->set_values(4, 5);
    cout << ppoly1->area() << '\n';
    cout << ppoly2->area() << '\n';
    return 0;
}

// pure virtual members can be called
// from the abstract base class
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
    virtual int area() = 0;
    void printarea()
    {
        cout << this->area() << '\n';
    }
};

class Rectangle : public Polygon
{
public:
    int area(void)
    {
        return (width * height);
    }
};

class Triangle : public Polygon
{
public:
    int area(void)
    {
        return (width * height / 2);
    }
};

int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon *ppoly1 = &rect;
    Polygon *ppoly2 = &trgl;
    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);
    ppoly1->printarea();
    ppoly2->printarea();
    return 0;
}

// dynamic allocation and polymorphism
#include <iostream>
using namespace std;

class Polygon
{
protected:
    int width, height;

public:
    Polygon(int a, int b) : width(a), height(b) {}
    virtual int area(void) = 0;
    void printarea()
    {
        cout << this->area() << '\n';
    }
};

class Rectangle : public Polygon
{
public:
    Rectangle(int a, int b) : Polygon(a, b) {}
    int area()
    {
        return width * height;
    }
};

class Triangle : public Polygon
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
    Polygon *ppoly1 = new Rectangle(4, 5);
    Polygon *ppoly2 = new Triangle(4, 5);
    ppoly1->printarea();
    ppoly2->printarea();
    delete ppoly1;
    delete ppoly2;
    return 0;
}