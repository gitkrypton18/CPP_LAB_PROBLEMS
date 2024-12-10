// program to read two matrices and multiply them
#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], M[3][3], sum;
    // input first matrix
    cout << "Enter the elements of first matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    // input second matrix
    cout << "Enter the elements of second matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    // matrix multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum = 0;
            for (int k = 0; k < 3; k++) {
                sum += A[i][k] * B[k][j];
            }
            M[i][j] = sum;
        }
    }

    // printing the resultant matrix
    cout << "The resultant matrix after multiplication is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
