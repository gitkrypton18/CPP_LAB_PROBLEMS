// program to selection sort an array
#include <iostream>
using namespace std;

int main() {
    int n, temp, ix_min;
    cout << "Enter the array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) { // input for loop
        cin >> arr[i];
    }

    // doing the selection sort
    for (int j = 0; j < n - 1; j++) { // sorting for loop
        ix_min = j;
        for (int i = j + 1; i < n; i++) {
            if (arr[ix_min] > arr[i]) {
                ix_min = i;
            }
        }
        temp = arr[j];
        arr[j] = arr[ix_min];
        arr[ix_min] = temp;
    }
    cout << "The sorted elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}
