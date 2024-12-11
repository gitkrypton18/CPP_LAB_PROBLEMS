// Program to print Fibonacci series 0,1,1,2,3,5,8,...
#include <iostream>
using namespace std;

int main()
{
    int num1 = 0, num2 = 1, n, temp;
    cout << "Enter number of elements: "; // declare up to which you are required
    cin >> n;
    cout << num1 << "\t" << num2 << "\t";
    for (int i = 3; i <= n; i++)
    { // for loop to increment the value of num2 by adding its previous num1
        temp = num2;
        cout << num1 + num2 << "\t";
        num2 += num1;
        num1 = temp;
    }
    return 0;
}
