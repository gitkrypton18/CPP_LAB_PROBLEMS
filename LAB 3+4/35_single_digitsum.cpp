// READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGITS OF N.
// eg :-- 456 => 4+5+6 => 15 => 1+5 => 6

#include <iostream>
using namespace std;

int main() {
    int num, sum_digit;
    cout << "Enter the number to find the single digit sum: ";
    cin >> num;

    while (num >= 10) {
        sum_digit = 0;
        while (num != 0) {
            sum_digit += num % 10;
            num /= 10;
        }
        num = sum_digit;
    }

    cout << "The single sum of digits of the given number is " << num << endl;
    return 0;
}
