// program to read an array and find max and second max
#include <iostream>
using namespace std;

int main() {
    int n, x = 0, y = 0, z = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the numbers: ";
        cin >> arr[i];
        if (arr[i] > x) { // swapping the values
            x = x + arr[i];
            arr[i] = x - arr[i];
            x = x - arr[i];
        }
        if (arr[i] > y && arr[i] < x) { // swapping the values
            y = y + arr[i];
            arr[i] = y - arr[i];
            y = y - arr[i];
        }
        // if (arr[i] > z && arr[i] < x && arr[i] < y) {
        //     z = z + arr[i];
        //     arr[i] = z - arr[i];
        //     z = z - arr[i];
        // }
    }
    cout << "\nThe 1st greatest is " << x << "\nThe 2nd greatest is " << y << endl;

    return 0;
}
