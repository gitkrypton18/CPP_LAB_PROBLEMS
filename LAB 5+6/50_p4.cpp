/*
A
BB
CCC
DDDD
EEEEE
*/
#include <iostream>
using namespace std;

int main() {
    char alpha = 'A';
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << alpha;
        }
        alpha++;
        cout << endl;
    }

    return 0;
}
