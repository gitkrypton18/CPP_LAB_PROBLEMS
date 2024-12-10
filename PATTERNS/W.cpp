/*
A
AB
ABC
ABCD
ABCDE
*/
#include <iostream>
using namespace std;

int main() {
    char alpha;
    for (int i = 0; i < 5; i++) {
        char alpha = 'A';
        for (int j = 0; j <= i; j++) {
            cout << alpha;
            alpha++;
        }
        cout << endl;
    }

    return 0;
}
