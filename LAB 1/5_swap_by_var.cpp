#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    // Swapping using a third variable
    c = a;
    a = b;
    b = c;

    cout << "Now a = " << a << " and b = " << b << endl;

    return 0;
}
