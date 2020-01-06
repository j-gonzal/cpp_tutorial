/*
if (x = 100)
    cout << "x is 100";
*/

/*
if (x == 100)
{
    cout << "x is ";
    cout << x;
}
*/

/* equivalent to above
if (x == 100); { cout << "x is "; cout << x;}
*/

/*
if (x == 100)
    cout << "x is 100";
else
    cout << "x is not 100";
*/

/* 
if (x > 0)
    cout << "x is positive";
else if (x < 0)
    cout << "x is negative";
else
    cout << "x is 0";
*/

//custom countdown using while
#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    while (n > 0)
    {
        cout << n << ", ";
        --n;
    }

    cout << "liftoff!\n";
}

// echo machine
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    do
    {
        cout << "Enter text: ";
        getline(cin, str);
        cout << "You entered: " << str << '\n';
    } while (str != "goodbye");
}

// countdown using for loop
#include <iostream>
using namespace std;

int main()
{
    for (int n = 10; n > 0; n--)
    {
        cout << n << ", ";
    }
    cout << "liftoff!\n";
}

for (n = 0, i = 100; n != i; ++n, --i)
{
    // whatever here...
}

// range-based for loop
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str{"Hello!"};
    for (char c : str)
    {
        cout << "[" << c << "]";
    }
    cout << '\n';
}

/*
for (auto c : str)
    cout << "[" << c << "]";
*/

// break loop example
#include <iostream>
using namespace std;

int main()
{
    for (int n = 10; n > 0; n--)
    {
        cout << n << ", ";
        if (n == 3)
        {
            cout << "countdown aborted!";
            break;
        }
    }
}

// continue look example
#include <iostream>
using namespace std;

int main()
{
    for (int n = 10; n > 0; n--)
    {
        if (n == 5)
            continue;
        cout << n << ", ";
    }
    cout << "liftoff!\n";
}

// goto loop example
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
mylabel:
    cout << n << ", ";
    n--;
    if (n > 0)
        goto mylabel;
    cout << "liftoff!\n";
}

/*
switch (x) {
    case 1:
    case 2:
    case 3:
        cout << "x is 1, 2, or 3";
        break;
    default:
        cout << "x is not 1, 2, or 3";
}
