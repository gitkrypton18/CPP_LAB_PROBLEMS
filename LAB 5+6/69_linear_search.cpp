// program to perform a linear search on an array
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

    cout << "Enter the element to be found: ";
    cin >> temp;

    for (int i = 0; i < n; i++) { // performing the linear search on array
        if (temp == arr[i]) {
            cout << "The INDEX of " << temp << " is " << i << endl;
            break; // Once found, break out of the loop
        }
    }

    return 0;
}
