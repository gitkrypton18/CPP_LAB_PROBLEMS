// function to swap two numbers
#include <iostream>
using namespace std;

void Swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "The swapped values of x and y are " << a << " and " << b << endl;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;
    Swap(x, y);

    return 0;
}
