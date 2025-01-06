// IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS
//  LAST N DIGITS
//  FOR EXAMPLE FLIP(123, 2)= 132 ; (HERE N=2) FLIP(12345,3)= 12543 (HERE N=3).
// you can also say it advanced version of reverse number
#include <iostream>
using namespace std;
int Flip(int num, int n)
{
    int original = num; // storing the original number
    int temp, rev = 0, exp = 1, sub = 0;

    for (int i = 1; i <= n; i++)
    {
        temp = num % 10;       // extract digit from left
        sub += temp * exp;     // to erase last n digits this "sub" will be subtracted finally
        exp *= 10;             // this will multiply by temp in order to raise 10 powers
        rev = rev * 10 + temp; // adding the reverse digits
        num /= 10;
    }

    return (original - sub) + rev;
}
int main()
{
    int num, n;
    cout << "Enter the number you want to flip\n";
    cin >> num;
    cout << "Enter the number of digits you want to flip\n";
    cin >> n;

    cout << Flip(num, n);

    return 0;
}
