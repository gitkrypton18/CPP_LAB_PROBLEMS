// PROGRAM TO READ A 3*3 MATRIX AND ADD THEIR VALUE AND STORE THEM IN THIRD MATRIX.
#include <iostream>
using namespace std;

int main() {
    int alpha_array[3][3];
    int beta_array[3][3];
    int gamma_array[3][3];
    cout << "Enter the elements of first matrix:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> alpha_array[i][j];
        }
    }
    cout << "Enter the elements of second matrix:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> beta_array[i][j];
        }
    }
    cout << "The sum of the two matrices is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            gamma_array[i][j] = alpha_array[i][j] + beta_array[i][j];
            cout << gamma_array[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
