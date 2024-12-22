/*MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C++*/
#include <iostream>
using namespace std;

int main()
{
    int value = 10;    // Declare an integer variable
    int *ptr = &value; // Initialize pointer with address of value

    cout << "Original value: " << value << endl;

    // Modify value using pointer
    *ptr = 20;

    cout << "Modified value: " << value << endl;

    return 0;
}
