// READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ
#include <iostream>
using namespace std;

int main() {
    int a, sum = 0;
    cout << "Enter a list of numbers: ";

    for (int i = 0;; i++) {
        cin >> a;
        if (a >= 0) {
            sum += a;
        } else if (a < 0) {
            break;
        }
    }
    cout << "The sum of positive numbers is " << sum << endl;

    return 0;
}
