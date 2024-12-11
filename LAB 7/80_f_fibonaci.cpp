#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    // cout << "Series" << endl;

    return fibo(n - 2) + fibo(n - 1);
}
// series is 0 1 1 2 3 5 8 13 // zero is must
int main()
{
    int n;
    cout << "enter upto which term fibo is required : " << endl;
    cin >> n;

    cout << "the series is :" << endl;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        cout << fibo(i) << "\t";
    }

    return 0;
}