// PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER
#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string :" << endl;
    int vowel = 0;
    string arr = "aeiouAEIOU";
    getline(cin, s);
    char *ptr = &s[0];
    for (int i = 0; *ptr != '\0'; i++)
    {
        for (int i = 0; i < 10; i++)
        {
            if (*ptr == arr[i])
            {
                vowel++;
            }
        }

        ptr++;
    }
    cout << "The number of vowels are : " << vowel << endl;

    return 0;
}