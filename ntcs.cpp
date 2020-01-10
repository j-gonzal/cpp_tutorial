char foo[20];

char myword[] = {'H', 'e', 'l', 'l', 'o', '\0'};

char myword[] = {'H', 'e', 'l', 'l', 'o', '\0'};
char myword[] = "Hello";

myword = "Bye";
myword[] = "Bye";
myword = {'B', 'y', 'e' '\0'};
// none of the above are valid

// arrays cannot be assigned to values, below is correct:
myword[0] = 'B';
myword[1] = 'y';
myword[2] = 'e';
myword[3] = '\0';

// strings and NTCS (null-terminated character sequences)
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char question1[] = "What is your name? ";
    string question2 = "Where do you live? ";
    char answer1[80];
    string answer2;
    cout << question1;
    cin >> answer1;
    cout << question2;
    cin >> answer2;
    cout << "Hello, " << answer1;
    cout << " from " << answer2 << '!\n';
    return 0;
}

char myntcs[] = "some text";
string mystring = myntcs; // convert c-string to string
cout << mystring;         // printed as a library string
cout << mystring.c_str(); // printed as a c-string
// (note: both c_str and data members of string are equivalent)
