#include <iostream>
using namespace std;
void ReadData(string s)
{
    int count = 0;
    getline(cin, s);
    for (int i = 0;; i++)
    {
        if (s[i] != '\0')
        {
            count++;
        }
        else
            break;
    }
    cout << "the string length of " << s << " is " << count << endl;
}
int main()
{

    string s;

    cout << "Enter the string whose length want to found :" << endl;
    ReadData(s);

    return 0;
}