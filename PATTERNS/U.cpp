#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
    for (int i = 0; i < 4; i++) {
        for (int k = 4; k > i; k--) {
            cout << " ";
        }
        ch = 'A';
        for (int j = 0; j < 5; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}
