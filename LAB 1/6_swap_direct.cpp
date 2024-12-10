#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;

    // Swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "The swapped value of a and b is: " << a << ", " << b << endl;

    return 0;
}
