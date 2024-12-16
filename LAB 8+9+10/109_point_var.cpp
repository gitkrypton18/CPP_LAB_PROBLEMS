/*MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C++*/
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = 456;

    int *x = &a;

    cout << "Initial Value of a is : " << *x << endl;
    cin >> b;
    int *y = &b;
    x = y;

    cout << "Final Value of a is : " << *x << endl;

    return 0;
}