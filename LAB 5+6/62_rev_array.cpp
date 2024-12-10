// program to reverse an array
#include <iostream>
using namespace std;

int main() {
    int arroriginal[7], i, j;
    cout << "Enter the array elements: " << endl;
    for (i = 0; i < 7; i++) {
        cin >> arroriginal[i];
    }

    cout << "Reversed array elements: ";
    for (i = 0; i < 7; i++) {
        j = 7 - i - 1;
        cout << arroriginal[j] << "\t";
    }
    cout << endl;

    return 0;
}
