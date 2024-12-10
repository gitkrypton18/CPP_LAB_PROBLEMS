// program to print the sum of all odd and even numbers between 1 and n
#include <iostream>
using namespace std;

int main() {
    int n, sum_odd, sum_even;
    cout << "Enter the value of n: ";
    cin >> n;
    int k = (n - 1) / 2;
    int l = n / 2;
    
    if (n % 2 == 0) {
        sum_odd = (n - 1) * (n - 1);
        sum_even = l * (l + 1);
    } else {
        sum_odd = n * n;
        sum_even = k * (k + 1);
    }

    cout << "The sum of all odd numbers between 1 and n is " << sum_odd << endl;
    cout << "The sum of all even numbers between 1 and n is " << sum_even << endl;

    return 0;
}
