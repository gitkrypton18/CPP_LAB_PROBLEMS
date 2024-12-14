// WRITE A FUNCTION TO RADE LINE OF TEXT AND FIND OUT LENGTH OF STRING
#include <iostream>
using namespace std;
void ReadData(string s) // function taking a string and following below operations

{
    int count = 0;
    getline(cin, s);
    for (int i = 0;; i++)
    {
        if (s[i] != '\0')
        {
            if (s[i] == ' ')
            {
                continue;
            }

            count++;
        }
        else
            break;
    }
    cout << "the string length excluding spaces of " << s << " is " << count << endl;
}
int main()
{

    string s;

    cout << "Enter the string whose length want to found :" << endl;
    ReadData(s);

    return 0;
}