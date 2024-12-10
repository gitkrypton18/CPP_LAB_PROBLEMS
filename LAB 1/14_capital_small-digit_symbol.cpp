#include <iostream>
using namespace std;

int main() {
    char alpha;
    cout << "Enter any char or symbol: ";
    cin >> alpha;

    if (alpha >= 33 && alpha <= 47) {
        cout << "Given is a special symbol" << endl;
    } else if (alpha >= 48 && alpha <= 57) {
        cout << "Given is a digit" << endl;
    } else if (alpha >= 58 && alpha <= 64) {
        cout << "Given is a special symbol marks" << endl;
    } else if (alpha >= 65 && alpha <= 90) {
        cout << "Given is an uppercase letter" << endl;
    } else if (alpha >= 91 && alpha <= 96) {
        cout << "Given is a shift symbol" << endl;
    } else if (alpha >= 97 && alpha <= 122) {
        cout << "Given is a lowercase letter" << endl;
    } else if (alpha >= 123 && alpha <= 126) {
        cout << "Given is a bracket or symbol" << endl;
    } else {
        cout << "Given is an unknown character" << endl;
    }

    return 0;
}
