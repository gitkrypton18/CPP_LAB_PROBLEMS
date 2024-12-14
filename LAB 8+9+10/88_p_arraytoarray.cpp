// WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS
#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    int temp;
    for (int i = 0; i < 5; i++)
    {
        *(arr2 + i) = *(arr1 + i);
    }
    cout << "The first array is :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << "\t";
    }

    cout << endl
         << "The second array is :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << "\t";
    }

    return 0;
}