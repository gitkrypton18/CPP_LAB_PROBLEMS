#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter any character: ";
    cin >> ch;
    int x = ch;

    (x >= 97 && x <= 122) ? cout << ch << " is lowercase" << endl : cout << ch << " is NOT lowercase" << endl;

    return 0;
}
