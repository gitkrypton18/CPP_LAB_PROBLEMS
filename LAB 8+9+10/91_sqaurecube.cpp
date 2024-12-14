// WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.
#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int *pointer = &number;
    cout << "The square is " << (*pointer) * (*pointer) << endl;
    cout << "The cube is " << (*pointer) * (*pointer) * (*pointer) << endl;

    return 0;
}