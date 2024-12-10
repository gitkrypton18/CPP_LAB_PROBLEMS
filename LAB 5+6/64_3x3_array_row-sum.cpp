// PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS
#include <iostream>
using namespace std;

int main() {
    int alpha_array[3][3];
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> alpha_array[i][j];
        }
    }
    int row_sum[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            row_sum[i] += alpha_array[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "The sum of row " << i + 1 << " is " << row_sum[i] << endl;
    }

    return 0;
}
