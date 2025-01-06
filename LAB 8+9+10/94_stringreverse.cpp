//  WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING
// POINTERS.FOR EXAMPLE,
// ST =”SVNITJAVA” IS COPIED AS “AVAJTINVS”

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string a;
    int j = 0;
    cout << "Enter the string to be reversed into other string :  " << endl;
    getline(cin, a);
    char *ptr_a = &a[0];
    while (*ptr_a != '\0') // counting the length of a
    {

        j++;
        ptr_a++;
    }
    ptr_a = &a[0];

    char b[j]; // making a "b" array
    char *ptr_b = &b[j - 1];
    while (*ptr_a != '\0')
    {
        *ptr_b = *ptr_a;
        ptr_b--;
        ptr_a++;
    }
    b[j] = '\0';
    cout << "the reversed string is : " << b << endl;

    return 0;
}
