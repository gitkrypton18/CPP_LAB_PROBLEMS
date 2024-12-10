// program to find max and second max
#include <iostream>
using namespace std;

int main() {
    int n, a, x = 0, y = 0, z = 0;
    cout << "Enter the number of numbers required: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter the number: ";
        cin >> a;
        if (a > x) {
            x = x + a;
            a = x - a;
            x = x - a;
        }
        if (a > y && a < x) {
            y = y + a;
            a = y - a;
            y = y - a;
        }
        if (a > z && a < x && a < y) {
            z = z + a;
            a = z - a;
            z = z - a;
        }
    }
    cout << "The 1st greatest is " << x << endl;
    cout << "The 2nd greatest is " << y << endl;

    return 0;
}
