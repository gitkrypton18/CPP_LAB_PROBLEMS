#include <iostream>
using namespace std;

// Function to count digits
int Count(int num)
{
    if (num == 0)
        return 1; // Handle the case for 0
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

// Power function
int Power(int num, int exp)
{
    int power = 1;
    for (int i = 0; i < exp; i++)
    { // Changed to start from 0
        power *= num;
    }
    return power;
}

// Extract and sum function
int extractAndSum(int num)
{
    int digit, sum = 0, count = Count(num);
    while (num > 0)
    {
        digit = num % 10;
        sum += Power(digit, count);
        num /= 10;
    }
    return sum;
}

// Main function
int main()
{
    int num;
    cout << "Enter any num: ";
    cin >> num;

    if (extractAndSum(num) == num)
    {
        cout << num << " is an Armstrong num." << endl;
    }
    else
    {
        cout << num << " is not an Armstrong num." << endl;
    }

    return 0;
}
