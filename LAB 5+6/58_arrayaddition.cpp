// program to add two arrays
#include <iostream>
using namespace std;

int main() {
    int arr1[10], arr2[10], arrsum[10];
    for (int i = 0; i < 10; i++) {
        cout << "Enter the elements of array 1: " << endl;
        cin >> arr1[i];
    }
    for (int i = 0; i < 10; i++) {
        cout << "Enter the elements of array 2: " << endl;
        cin >> arr2[i];
    }
    for (int i = 0; i < 10; i++) {
        arrsum[i] = arr1[i] + arr2[i];
        cout << "The element at " << i << " position is " << arrsum[i] << endl;
    }

    return 0;
}
