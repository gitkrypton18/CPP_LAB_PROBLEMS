// WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES USING POINTERS
#include <iostream>
#include <string>
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
        else

        {
            count++;
        }
        ptr++;
    }

    cout << "The length of string without spaces is : " << count << endl;
    cout << "The length of string with spaces is : " << count + spacecount << endl;

    return 0;
}