/*WRITE A C PROGRAM TO FIND THE VALUE OF Y USING
1+x where n=1
1+x/n where n=2
Y(x,n) = 1 + x^n when n=3
1 + nx when n>3 or n<1*/

#include <iostream>
using namespace std;

int main() {
    float y, x, n;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n == 1) {
        y = (1 + x);
        cout << "The value of y is " << y << endl;
    } else if (n == 2) {
        y = (1 + x / n);
        cout << "The value of y is " << y << endl;
    } else if (n == 3) {
        y = (1 + (x * x * x));
        cout << "The value of y is " << y << endl;
    } else if (n < 1 || n > 3) {
        y = (1 + (n * x));
        cout << "The value of y is " << y << endl;
    }

    return 0;
}
