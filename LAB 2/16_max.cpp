#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            cout << "a is greatest" << endl;
        } else if (c > a) {
            cout << "c is greatest" << endl;
        }
    } else if (b > a) {
        if (b > c) {
            cout << "b is greatest" << endl;
        } else if (c > b) {
            cout << "c is greatest" << endl;
        }
    }

    return 0;
}
