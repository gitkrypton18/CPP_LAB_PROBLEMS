// PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING POINTERS.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of strings" << endl;
    cin >> n;

    string s[n];
    string *ptr = &s[0];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, *ptr);
        ptr++;
    }
    for (int i = 0; i < n; i++)
    {

        cout << *ptr << endl;
        ptr++;
    }

    // checking the order of strings

    return 0;
}