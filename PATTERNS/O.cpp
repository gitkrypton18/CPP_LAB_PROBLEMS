/*
9
87
654
3210
*/

#include <iostream>
using namespace std;

int main() {
    int alpha = 9;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= i; j++) {
            cout << alpha;
            alpha--;
        }
        cout << endl;
    }

    return 0;
}
