// program to get sum of digits of a given number
#include <iostream>
using namespace std;

int main() {
    int num, temp, sum = 0;
    cout << "Enter the number to find the sum of its digits: ";
    cin >> num;
    while (num != 0) {
        temp = num % 10;
        sum += temp;
        num /= 10;
    }
    cout << "The sum of the digits of the given number is " << sum << endl;

    return 0;
}
