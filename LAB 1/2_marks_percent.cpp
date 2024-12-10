#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, m4, m5;
    float per;
    cout << "Enter marks in 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    per = (((m1 + m2 + m3 + m4 + m5) / 500.0) * 100.0);
    cout << "Percentage: " << per << endl;
    return 0;
}
