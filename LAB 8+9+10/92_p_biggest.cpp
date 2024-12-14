// WRITE A C++ PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS
#include <iostream>
using namespace std;

int main()
{
    cout << "Write total no want to compare" << endl;

    int total_nos;
    cin >> total_nos;
    cout << "Enter the numbers one by one " << endl;
    int numberini;
    cin >> numberini;
    int *ptr = &numberini;
    int var;
    for (int i = 1; i < total_nos; i++)
    {
        cin >> var;
        int *ptrcom = &var;

        if (*ptrcom > *ptr)
        {
            *ptr = *ptrcom;
        }
    }
    cout << "The biggest of all the nos is " << *ptr;

    return 0;
}