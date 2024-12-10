// checking whether a number is armstrong or not without functions
#include <iostream>
using namespace std;

int main()
{
    int num, counti = 0; // taking input number from user and initializing digit counter to 0
    cout << "Enter any number: ";
    cin >> num;
    int original = num; // storing num into original to not lose it

    while (num > 0)
    { // counter
        num /= 10;
        counti++; // counting digits
    }
    num = original;
    cout << "digits are " << counti << endl;

    int digit, sumofpower = 0, power;
    while (num > 0)
    {
        power = 1;
        digit = num % 10;
        // cout << digit;
        for (int i = 0; i < counti; i++)
        {
            power *= digit;
            // cout << power;
        }
        sumofpower += power;
        // cout << sumofpower;
        num /= 10;
    }

    if (sumofpower == original)
    {
        cout << "The given number is an armstrong number" << endl;
    }
    else
    {
        cout << "The given number is not an armstrong number" << endl;
    }

    return 0;
}
