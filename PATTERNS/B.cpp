/*
1
22
333
4444
55555
*/
#include <iostream>
using namespace std;

int main() {
    int alpha = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << alpha;
        }
        alpha++;
        cout << endl;
    }

    return 0;
}
