#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1;
    cout << "Enter the number whose factorial is required: ";
    cin >> n;

    if (n == 0)
    {
        fact = 1;
        cout << "The factorial is " << fact << endl;
    }
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        cout << "The factorial is " << fact << endl;
    }
    if (n < 0)
    {
        cout << "The factorial is not defined for negative numbers" << endl;
    }

    return 0;
}
