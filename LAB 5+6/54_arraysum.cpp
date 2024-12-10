// PROGRAM TO READ AN ARRAY OF 10 INTEGERS AND PRINT SUM OF NUMBERS
#include <iostream>
using namespace std;

int main() {
    int n = 10, arr[n], sum = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter the array elements: ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "The sum of all elements is " << sum << endl;
    return 0;
}
