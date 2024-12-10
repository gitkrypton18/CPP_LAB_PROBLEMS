// function returns 1 if number is prime and zero in other cases
#include <iostream>
using namespace std;

int PrimeCheck(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i < n; i++) { // Looping up to n
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    if (PrimeCheck(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
    
    return 0;
}
