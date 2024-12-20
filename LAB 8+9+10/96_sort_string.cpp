// PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING POINTERS.
#include <iostream>
using namespace std;

int main()
{
    int n;
    string temp;
    cout << "Enter the number of strings you want to apply\n";
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {

                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    cout << "The ordered string is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << endl;
    }

    return 0;
}