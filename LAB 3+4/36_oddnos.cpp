// program to print odd numbers series
#include <iostream>
using namespace std;

int main() {
    int k, i = 1;
    cout << "Enter up to terms of the series: ";
    cin >> k;

    for (int i = 0; i < k; i++) {
        int n = 2 * i + 1;
        cout << n << "\t";
    }

    return 0;
}
