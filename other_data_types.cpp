typedef char C;
typedef unsigned int WORD;
typedef char *pChar;
typedef char field[50];

/* once aliases are defined, can be used in any declaration just like any other valid type
C mychar, anotherchar, *ptc1;
WORD, myword;
pChar, ptc2;
field name;
*/

// using new_type_name = existing_type ;

// above aliases could also be defined as
using C = char;
using WORD = unsigned int;
using pChar = char *;
using field = char[50];

/* 
union type_name {
    member_type1 member_name1;
    member_type2 member_name2;
    member_type3 member_name3;
    .
    .
} object_names;
*/

union mytypes_t {
    char c;
    int i;
    float f;
} mytypes;

/* declares an object (mytypes) with three members:
mytypes.c
mytpes.i
mytypes.f
*/

union mix_t {
    int l;
    struct
    {
        short hi;
        short lo;
    } s;
    char c[4];
} mix;

// structure with regular union
struct book1_t
{
    char title[50];
    char author[50];
    union {
        float dollars;
        int yen;
    } price;
} book1;

// structure with anonymous union
struct book2_t
{
    char title[50];
    char author[50];
    union {
        float dollars;
        int yen;
    };
} book2;

/* different ways to access, object of first type (regular union):
book1.price.dollars
book2.price.yen

object of second type (anonymous union):
book2.dollars
book2.yen
*/

/* enumerated types
enum type_name {
    value1,
    value2,
    value3,
    .
    .
} object_names;
*/

enum colors_t
{
    black,
    blue,
    green,
    cyan,
    red,
    purple,
    yellow,
    white
};

colors_t mycolor;

mycolor = blue;
if (mycolor == green)
    mycolor = red;

enum months_t
{
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
} y2k;

enum class Colors
{
    black,
    blue,
    green,
    cyan,
    red,
    purple,
    yellow,
    white
};

Colors mycolor;

mycolor = Colors::blue;
if (mycolor == Colors::green)
    mycolor = Colors::red;

enum class EyeColor : char
{
    blue,
    green,
    brown
};