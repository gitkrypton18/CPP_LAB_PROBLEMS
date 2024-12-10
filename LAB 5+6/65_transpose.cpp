// PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE.
#include <iostream>
using namespace std;

int main() {
    int alpha_array[3][3];
    int beta_array[3][3];
    cout << "Enter the 3x3 matrix elements: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> alpha_array[i][j];
        }
    }

    cout << "The transpose matrix is: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            beta_array[i][j] = alpha_array[j][i];
            cout << beta_array[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
