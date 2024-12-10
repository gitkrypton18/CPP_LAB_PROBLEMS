// PROGRAM TO READ AN ARRAY OF 10 INTEGERS AND COUNT TOTAL NO OF ODD AND TOTAL NO. OF EVEN
#include <iostream>
using namespace std;

int main() {
    int n = 10, arr[n], even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter the array elements: ";
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            even++;
        }
        if (arr[i] % 2 != 0) {
            odd++;
        }
    }
    cout << "The number of even elements in the array is " << even << endl;
    cout << "The number of odd elements in the array is " << odd << endl;

    return 0;
}
