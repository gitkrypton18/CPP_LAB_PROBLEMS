// program to perform an occurrence count on an array
#include <iostream>
using namespace std;

int main() {
    int n, temp, counter = 0;
    cout << "Enter the array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) { // input for loop
        cin >> arr[i];
    }

    cout << "Enter the element whose occurrence is required: ";
    cin >> temp;

    for (int i = 0; i < n; i++) { // performing the occurrence count on the array
        if (temp == arr[i]) {
            counter++;
        }
    }
    cout << "In this array, " << temp << " occurred exactly " << counter << " times" << endl;

    return 0;
}
