// PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT
#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    cout << "Enter the 3x3 elements: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    int maxi = arr[0][0], mini = arr[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > maxi) {
                maxi = arr[i][j];
            }
            if (arr[i][j] <= mini) {
                mini = arr[i][j];
            }
        }
    }
    // printing the results
    cout << "The maximum element is " << maxi << endl;
    cout << "The minimum element is " << mini << endl;

    return 0;
}
