// program to get reverse of a given number
#include <iostream>
using namespace std;

int main() {
    int num, temp, rev = 0;
    cout << "Enter the number to be reversed: ";
    cin >> num;
    while (num != 0) {
        temp = num % 10;
        rev = rev * 10 + temp;
        num /= 10;
    }
    cout << "The reversed number is " << rev << endl;

    return 0;
}
