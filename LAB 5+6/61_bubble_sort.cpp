// program to bubble sort an array
#include <iostream>
using namespace std;

int main() {
    int n, temp;
    cout << "Enter the array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) { // input for loop
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++) { // sorting for loop
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "Array in increasing order is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}
