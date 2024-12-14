// WRITE A C++ PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the string to be found length" << endl;
    string s;
    int count = 0, spacecount = 0;

    getline(cin, s);
    char *ptr = &s[0];
    while (*ptr != '\0')
    {
        if (*ptr == ' ')
        {
            spacecount++;
        }

        ptr++;
    }

    cout << "The no of words are : " << spacecount + 1;

    return 0;
}