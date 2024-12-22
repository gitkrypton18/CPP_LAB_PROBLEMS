// PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING POINTERS.
// DICTIONARY PROGRAM
#include <iostream>
#include <string>
using namespace std;

void sortStrings(string *str, int n)
{
    string temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(str + j) > *(str + j + 1)) // Comparing the strings using pointers
            {
                temp = *(str + j); // Swapping the strings using pointers
                *(str + j) = *(str + j + 1);
                *(str + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of strings you want to apply\n";
    cin >> n;
    string str[n]; // Assuming a maximum of 100 strings
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    cout << endl;
    sortStrings(str, n);
    cout << "The ordered string is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << endl;
    }
    return 0;
}
