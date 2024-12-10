#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    a > b && a > c ? cout << "a is greatest" << endl :
    b > c && b > a ? cout << "b is greatest" << endl :
    c > a && c > b ? cout << "c is greatest" << endl :
    cout << "null" << endl;

    return 0;
}
