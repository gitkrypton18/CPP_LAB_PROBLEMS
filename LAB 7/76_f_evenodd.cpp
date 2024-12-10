// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.
#include <iostream>
using namespace std;

void Checker(int a) {
    if (a % 2 == 0) {
        cout << "The number is even" << endl;
    } else {
        cout << "The number is odd" << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number to check odd/even: ";
    cin >> n;
    Checker(n);
    return 0;
}
