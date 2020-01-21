// exceptions
#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 20;
    }
    catch (int e)
    {
        cout << "An exception occurred. Exception Nr. " << e << '\n';
    }
    return 0;
}

// throws an exception:
throw 20;

try
{
    // code here
}
catch (int param)
{
    cout << "int exception";
}
catch (char param)
{
    cout << "char exception";
}
catch (...)
{
    cout << "default exception";
}

try
{
    try
    {
        // code here
    }
    catch (int in)
    {
        throw;
    }
}
catch (...)
{
    cout << "Exception occurred";
}

// deprecated but still supported
double myfunction(char param) throw(int);

int myfunction(int param) throw(); // all exceptions call unexpcted
int myfunction(int param);         // normal exception handling

// using standard exceptions
#include <iostream>
#include <exception>
using namespace std;

class myexception : public exception
{
    virtual const char *what() const throw()
    {
        return "My exception happened";
    }
} myex;

int main()
{
    try
    {
        throw myex;
    }
    catch (exception &e)
    {
        cout << e.what() << '\n';
    }
    return 0;
}

/* exception	    description
bad_alloc	        thrown by new on allocation failure
bad_cast	        thrown by dynamic_cast when it fails in a dynamic cast
bad_exception	    thrown by certain dynamic exception specifiers
bad_typeid	        thrown by typeid
bad_function_call	thrown by empty function objects
bad_weak_ptr	    thrown by shared_ptr when passed a bad weak_ptr
*/

// bad_alloc standard exception
#include <iostream>
#include <exception>
using namespace std;

int main()
{
    try
    {
        int *myarray = new int[1000];
    }
    catch (exception &e)
    {
        cout << "Standard exception: " << e.what() << endl;
    }
    return 0;
}