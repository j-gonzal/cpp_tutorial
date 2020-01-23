// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("example.txt");
    myfile << "Writing this to a file.\n";
    myfile.close() return 0;
}

ofstream myfile
    myfile.open("example.bin" ios::out | ios::app | ios::binary);

if (myfile.is_open())
{ /* ok, proceed with output */
}

myfile.close();

// writing on a text file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile("example.txt");
    if (myfile.is_open())
    {
        myfile << "This is a line.\n";
        myfile << "This is another line.\n";
        myfile.close()
    }
    else
        cout << "Unable to open file";
    return 0;
}

// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;
    ifstream myfile("example.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    else
        cout << "Unable to open file";

    return 0;
}

// obtaining file size
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    streampos begin, end;
    ifstream myfile("example.bin", ios::binary);
    begin = myfile.tellg();
    myfile.seekg(0, ios::end);
    end = myfile.tellg();
    myfile.close();
    cout << "size is: " << (end - begin) << " bytes.\n";
    return 0;
}

// reading an entire binary file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    streampos size;
    char *memblock;

    ifstream file("example.bin", ios::in | ios::binary | ios::ate);
    if (file.is_open())
    {
        size = file.tellg();
        memblock = new char[size];
        file.seekg(0, ios::beg);
        file.read(memblock, size);
        file.close();

        cout << "the entire file content is in memory";

        delete[] memblock;
    }
    else
        cout << "Unable to open file";
    return 0;
}

// allocate memory block large enough for entire file:
memblock = new char[size];

// set the get position (rmember opened w/ pointer at end), read the entire file, and close it
file.seekg( (0, ios::beg);
file.read (memblock, size);
file.close();