#include <iostream>
using namespace std;

int main()
{
    float base, height, area;
    cout << "Enter base length: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height;

    area = (base * height) / 2.0;

    cout << "Area of the triangle = " << area << " sq.units" << endl;

    return 0;
}
