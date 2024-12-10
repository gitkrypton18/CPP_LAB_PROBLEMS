// program to add two arrays
#include <iostream>
using namespace std;

int main() {
    int arr1[10], arr2[10];
    cout << "Enter the elements of array 1: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the elements of array 2: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr2[i];
    }
    for (int i = 0; i < 10; i++) { // swapping
        arr1[i] = arr1[i] + arr2[i];
        arr2[i] = arr1[i] - arr2[i];
        arr1[i] = arr1[i] - arr2[i];
    }
    cout << "The elements of arr1 are: ";
    for (int i = 0; i < 10; i++) {
        cout << arr1[i] << "\t";
    }
    cout << "\n\n";
    cout << "The elements of arr2 are: ";
    for (int i = 0; i < 10; i++) {
        cout << arr2[i] << "\t";
    }

    return 0;
}
