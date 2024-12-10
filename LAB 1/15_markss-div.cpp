#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, e, avg;
    cout << "Enter marks of 5 subjects out of 100: ";
    cin >> a >> b >> c >> d >> e;

    avg = (a + b + c + d + e) / 5.0;

    if (avg >= 90.0)
    {
        cout << "Grade: A+" << endl;
    }
    else if (avg < 90.0 && avg >= 80)
    {
        cout << "Grade: A" << endl;
    }
    else if (avg < 80.0 && avg >= 60)
    {
        cout << "Grade: B" << endl;
    }
    else if (avg < 60.0 && avg >= 35)
    {
        cout << "Grade: C" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }

    return 0;
}
