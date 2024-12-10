#include <iostream>
using namespace std;

int main() {
    int total_sec, days, hours, minutes, seconds;
    cout << "Enter the number of seconds: ";
    cin >> total_sec;

    days = total_sec / 86400;
    total_sec %= 86400;

    hours = total_sec / 3600;
    total_sec %= 3600;

    minutes = total_sec / 60;
    total_sec %= 60;

    cout << "The days are " << days << "\nhours are " << hours << "\nminutes are " << minutes << "\nseconds are " << total_sec << endl;

    return 0;
}
