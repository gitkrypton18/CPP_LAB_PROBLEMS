// READ A NUMBER N AND PRINT FACTOR OF N.(EX 28 = 1, 2, 4, 7, 14, 28)
#include <iostream>
using namespace std;

int main() {
    int k;
    cout << "Enter the integer whose factors are required: ";
    cin >> k;
    for (int i = 1; i <= k; i++) {
        if (k % i == 0) {
            cout << " " << i << " \t ";
        } else {
            continue;
        }
    }

    return 0;
}
