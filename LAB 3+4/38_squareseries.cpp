// program to print square numbers series
#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "Enter up to terms of the series: ";
    cin >> k;

    for (int i = 1; i <= k; i++) {
        int n = i * i;
        cout << n << "\t";
    }

    return 0;
}
