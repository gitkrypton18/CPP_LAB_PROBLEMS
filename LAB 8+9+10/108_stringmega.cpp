/*WITHOUT USING INBUILT STRING FUNCTIONS, PERFORM THE FOLLOWING IN C LANGUAGE:
A. COPY ONE STRING INTO ANOTHER
B. COMPARE TWO STRINGS
C. CONCAT TWO STRINGS
D. REVERSE A GIVEN STRING*/
#include <iostream>
using namespace std;

// A
void StringCopy(string a, string b) // copy string into empty
{
    a = "Rakesh";
    b = a;
    cout << b;
}
// B
void StringCompare(string a, string b) // compare the strings
{
    if (a == b)
    {
        cout << "Strings are equal" << endl;
    }
    else
        cout << "Strings are unequal" << endl;
}
// C
void StringConcat(string a, string b) // concate two string rakesh+roshan=rakeshroshan
{
    a += b;
    cout << "The concatenated string is : " << a << endl;
}
// D
void StringReverse(string a) // reverse stirng
{

    int c = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        c++;
    }

    char r[c + 1];
    for (int i = 0; i < c; i++)
    {
        r[i] = a[c - 1 - i];
    }
    r[c] = a[c];
    cout << "The string reversed is : " << r << endl;
}
int main()
{
    string a, b;
    a = "Rakesh";
    cout << "First String :" << a << endl;
    cout << "Copy" << endl;
    cout << "b as initial : " << b << endl;
    cout << "b as final : ";

    StringCopy(a, b);

    b = "Rakesh";
    cout << endl
         << endl
         << "Comparison" << endl;
    ;
    StringCompare(a, b);
    b = "Rohan";
    cout << endl;
    StringConcat(a, b);
    cout << endl;
    StringReverse(a);
    return 0;
}