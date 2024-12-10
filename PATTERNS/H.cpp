/*
1234
123
12
1
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 4; i++) {
        int k = 1;
        for (int j = 4; j > i; j--) {
            cout << k;
            k++;
        }
        cout << endl;
    }

    return 0;
}
