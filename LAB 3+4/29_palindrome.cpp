// to check whether a given number is palindrome or not
#include <iostream>
using namespace std;

int main() {
    int num, temp, rev = 0;
    cout << "Enter the number to check: ";
    cin >> num;
    int rem = num;
    while (num != 0) {
        temp = num % 10;
        rev = rev * 10 + temp;
        num /= 10;
    }
    if (rem == rev) {
        cout << "Number is palindrome" << endl;
    } else if (rev != rem) {
        cout << "Number is not a palindrome" << endl;
    }
    return 0;
}
