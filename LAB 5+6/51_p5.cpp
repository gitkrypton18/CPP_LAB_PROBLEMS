/*
10000
01000
00100
00010
00001
*/
#include <iostream>
using namespace std;

int main() {
    int k;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                k = 1;
            } else {
                k = 0;
            }

            cout << k;
        }
        cout << endl;
    }

    return 0;
}
