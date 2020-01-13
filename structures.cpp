struct product
{
    int weight;
    double price;
};

product apple;
product banana, melon;

struct product
{
    int weight;
    double price;
} apple, banana, melon;

/* standard variables of their respective types
apple.weight
apple.price
banana.weight
banana.price
melon.weight
melon.price
*/

// example about structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t
{
    string title;
    int year;
} mine, yours;

void printmovie(movies_t movie);

int main()
{
    string mystr;

    mine.title = "2001 A Space Odyssey";
    mine.year = 1968;

    cout << "Enter title: ";
    getline(cin, yours.title);
    cout << "Enter year: ";
    getline(cin, mystr);
    stringstream(mystr) >> yours.year;

    cout << "My favorite move is:\n ";
    printout(mine);
    cout << "And yours is:\n ";
    printout(yours);
    return 0;
}

void printmovie(movies_t movie)
{
    cout << movie.title;
    cout << " (" << movie.year << ")\n";
}

// array of structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t
{
    string title;
    int year;
} films[3];

void printmovie(movies_t movies);

int main()
{
    string mystr;
    int n;

    for (n = 0; n < 3; n++)
    {
        cout << "Enter title: ";
        getline(cin, films[n].title);
        cout << "Enter year: ";
        getline(cin, mystr);
        stringstream(mystr) >> films[n].year;
    }

    cout << "\nYou have entered these movies:\n";
    for (n = 0; n < 3; n++)
        printmovie(films[n]);
    return 0;
}

void printmovie(movies_t movie)
{
    cout << movie.title;
    cout << " (" << movie.year << ")\n";
}

struct movies_t
{
    string title;
    int year;
};

movies_t amovie;
movies_t *pmovie;

// pmovie = &amovie; would also be valid code

// pointers to structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t
{
    string title;
    int year;
};

int main()
{
    string mystr;

    movies_t amovie;
    movies_t *pmovie;
    pmovie = &amovie;

    cout << "Enter title: ";
    getline(cin, pmovie->title);
    cout << "Enter year: ";
    getline(cin, mystr);
    (stringstream) mystr >> pmovie->year;

    cout << "\nYou have entered:\n";
    cout << pmovie->title;
    cout << " (" << pmovie->year << ")\n";

    return 0;
}

/* for all purposes both are equivalent
pmovie->title
(*pmovie).title

different than below whcih are also equivalent

*pmovie.title
*(pmovie.title)
*/

struct movies_t
{
    string title;
    int year;
};

struct friends_t
{
    string name;
    string email;
    movies_t favorite_movie;
} charlie, maria;

friends_t *pfriends = &charlie;

/* after previous declarations, all below expressions are valid
charlie.name
maria.favorite_movie.title
charlie.favortie_movie.year
pfriends->favorite_movie.year
*/
