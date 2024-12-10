// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.
#include <iostream>
using namespace std;

void Palinda(int a) {
    int rev = 0, temp;
    int rem = a;
    while (a != 0) {
        temp = a % 10;
        rev = rev * 10 + temp;
        a /= 10;
    }
    if (rem == rev) {
        cout << "Number is palindrome" << endl;
    } else {
        cout << "Number is not a palindrome" << endl;
    }
}

int main() {
    int num;
    cout << "Enter the number to be checked for palindrome: ";
    cin >> num;
    Palinda(num);
    return 0;
}
