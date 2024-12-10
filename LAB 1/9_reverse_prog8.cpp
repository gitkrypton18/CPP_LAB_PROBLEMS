#include <iostream>
using namespace std;

int main() {
    int sec, days, hours, minutes, seconds;
    cout << "Enter days, hours, minutes, and seconds:" << endl;
    cin >> days >> hours >> minutes >> sec;

    days *= 86400;
    hours *= 3600;
    minutes *= 60;
    sec = sec + days + hours + minutes;

    cout << "The seconds are " << sec << endl;

    return 0;
}
