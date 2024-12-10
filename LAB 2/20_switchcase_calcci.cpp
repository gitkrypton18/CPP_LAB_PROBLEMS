#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char o;

    cout << "Enter two integers a and b and the operator between them: ";
    cin >> a >> o >> b;

    switch (o)
    {
    case '*':
        cout << "The multiplication of a and b is " << (a * b) << endl;
        break;
    case '/':
        cout << "The division of a by b is " << (a / b) << endl;
        break;
    case '+':
        cout << "The addition of a and b is " << (a + b) << endl;
        break;
    case '-':
        cout << "The difference of a and b is " << (a - b) << endl;
        break;
    default:
        cout << "Nothing Matched" << endl;
    }
    return 0;
}
