/*
Z
YX
WVU
TSRQ
*/

#include <iostream>
using namespace std;

int main() {
    char alpha = 'Z';
    for (int i = 0; i < 4; i++) {
        for (int k = 4; k > i; k--) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << alpha;
            alpha--;
        }

        cout << endl;
    }

    return 0;
}
