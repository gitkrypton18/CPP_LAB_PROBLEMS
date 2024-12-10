// Function to find the nCr factorial of a number
#include <iostream>
using namespace std;

int facto(int a) {
    int fact = 1;
    for (int i = 1; i <= a; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    cout << "Enter the n and r number to find nCr: ";
    cin >> n >> r;

    cout << "The nCr is " << facto(n) / (facto(r) * facto(n - r)) << endl;

    return 0;
}

