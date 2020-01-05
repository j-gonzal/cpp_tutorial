// cout << "Output sentence"; prints Output sentence on screen
// cout << 120; prints number 120 on screen
// cout << x; prints the value of x on screen

// cout << "Hello"; prints Hello
// cout << Hello; prints the content of variable Hello

// cout << "This " << " is a " << "single C++ statement";
// cout << "I am " << age << " years old and my zipcode is " << zipcode;

// cout << "First sentence.\n";
// cout << "Second sentence.\nThird sentence.";

// cout << "First sentence." << endl;
// cout << "Second sentence." << endl;

// int age;
// cin >> age;

// i/o example

#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Please enter an integer value: ";
    cin << i;
    cout << "The value you entered is " << i;
    cout << " and its double is " << i * 2 << ".\n";
    return 0;
}

// cin >> a >> b;

// cin >> a;
// cin >> b;

// string mystring;
// cin >> mystring;

//cin with strings
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mystr;
    cout << "What's your name? ";
    getline(cin, mystr);
    cout << "Hello " << mystr << ".\n";
    cout << "What is your favorite team? ";
    getline(cin, mystr);
    cout << "I like " << mystr << " too!\n";
    return 0;
}

// string mystr ("1204");
// int myint;
// stringstream(mystr) >> myint;

// stringstreams
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mystr;
    float price = 0;
    int quantity = 0;

    cout << "Enter price: ";
    getline(cin, mystr);
    stringstream(mystr) >> price;
    cout << "Enter quantity: ";
    getline(cin, mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price * quantity << endl;
    return 0;
}
