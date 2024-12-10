#include <iostream>
using namespace std;

int main()
{
    float basic, da, hra, pf;
    cout << "Enter Basic Salary: ";
    cin >> basic;
    cout << "Enter Dearness Allowance: ";
    cin >> da;
    cout << "Enter House Rent Allowance: ";
    cin >> hra;
    cout << "Enter Provident Fund: ";
    cin >> pf;
    float gross = basic + da + hra - pf;
    cout << "Gross Salary = " << gross << endl;
    return 0;
}
