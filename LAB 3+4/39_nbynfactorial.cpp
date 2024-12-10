// PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N.
#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "Enter up to which series is required: ";
    cin >> k;
    for (int i = 1; i <= k; i++) {
        cout << i << "/" << i << "!\t";
    }

    return 0;
}
