#include <iostream>
using namespace std;

int main()
{
    float p, r, si;
    int t;

    cout << "Enter Principal: ";
    cin >> p;
    cout << "Enter Rate of interest: ";
    cin >> r;
    cout << "Enter Time in years: ";
    cin >> t;

    si = (p * r * t) / 100.0;
    cout << "Simple Interest: " << si << endl;

    return 0;
}
