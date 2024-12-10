// program to find max and min
#include <iostream>
using namespace std;

int main() {
    int n, a, x = 0, y = 0, b;
    cout << "Enter the number of numbers required: ";
    cin >> n;

    cout << "Enter the number: ";
    cin >> a;
    for (int j = 0; j < n - 1; j++) {
        cout << "Enter the number: ";
        cin >> b;
        if (b < a) {
            a = b;
        }
        if (b > x) {
            x = x + b;
            b = x - b;
            x = x - b;
        }
        if (b > y && b < x) {
            y = y + b;
            b = y - b;
            y = y - b;
        }
    }
    cout << "The greatest is " << x << endl;
    cout << "The smallest is " << a << endl;

    return 0;
}
