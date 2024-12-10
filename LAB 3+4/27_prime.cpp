// to check prime or composite
#include <iostream>
using namespace std;

int main() {
    int prime = 1, n;
    cout << "Enter the number to find prime or not: ";
    cin >> n;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            prime = 0;
        }
    }
    if (prime == 1) {
        cout << "The given number is a prime number" << endl;
    } else if (prime == 0) {
        cout << "The given number is a composite number" << endl;
    }

    return 0;
}
