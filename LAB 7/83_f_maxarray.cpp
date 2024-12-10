// Function to read an array and find out the maximum.
#include <iostream>
using namespace std;

int maxer(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] >= max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maximum = maxer(arr, n);
    cout << "The maximum in this array is: " << maximum << endl;

    return 0;
}
