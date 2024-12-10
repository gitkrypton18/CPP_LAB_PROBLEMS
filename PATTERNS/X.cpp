/*  123456789
     1234567
      12345
       123
        1*/
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int alpha = 1;
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }

        for (int j = 8; j > (2 * i) - 1; j--)
        {
            cout << alpha;
            alpha++;
        }

        cout << endl;
    }

    return 0;
}
