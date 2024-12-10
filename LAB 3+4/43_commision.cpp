// WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES

#include <iostream>
using namespace std;

int main()
{
    float sales;
    float com;
    cout << "Enter the sales: ";
    cin >> sales;

    if (sales <= 500)
    {
        com = 0.05 * sales;
    }
    else if (sales > 500 && sales <= 2000)
    {
        com = 35 + 0.1 * (sales - 500);
    }
    else if (sales > 2000 && sales <= 5000)
    {
        com = 185 + 0.12 * (sales - 2000);
    }
    else if (sales > 5000)
    {
        com = 0.125 * sales;
    }

    cout << "The total commission is " << com << endl;
    return 0;
}
