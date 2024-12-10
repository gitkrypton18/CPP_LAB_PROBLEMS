#include <iostream>
using namespace std;

int main() {
    float cm, m, p, c, e;
    cout << "Enter marks in Mathematics out of 200: ";
    cin >> m;
    cout << "Enter marks in Physics out of 200: ";
    cin >> p;
    cout << "Enter marks in Chemistry out of 200: ";
    cin >> c;
    cout << "Enter marks in Entrance Exam out of 100: ";
    cin >> e;

    cm = m / 2 + c / 2 + p / 2 + e;
    cout << "Cutoff Marks: " << cm << endl;

    return 0;
}
