#include <iostream>
using namespace std;

int main()
{
    int k, count, power;
    cout << "Enter the base number and its exponent: ";
    cin >> k >> count;

    power = 1;
    for (int i = 1; i <= count; i++)
    {
        power = power * k;
    }

    cout << "The value of " << k << "^" << count << " is " << power << endl;
    return 0;
}
