// PROGRAM TO READ AN ARRAY OF 10 INTEGERS AND COUNT TOTAL NO. OF POSITIVE, NEGATIVE, AND ZERO ELEMENTS.
#include <iostream>
using namespace std;

int main() {
    int n = 10, arr[n], positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter the array elements: ";
        cin >> arr[i];
        if (arr[i] > 0) {
            positive++;
        }
        if (arr[i] == 0) {
            zero++;
        }
        if (arr[i] < 0) {
            negative++;
        }
    }
    cout << "The number of positive elements in the array is " << positive << endl;
    cout << "The number of negative elements in the array is " << negative << endl;
    cout << "The number of zero elements in the array is " << zero << endl;

    return 0;
}
