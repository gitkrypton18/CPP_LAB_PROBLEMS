// AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS
// FOLLOWS.
// Consumption in unit Rate for Charge
// 0-200 Re 0.50 per unit
// 210-400 Rs. 100 plus Re 0.65 per unit excess of 200
// 401-600 Rs. 230 plus Re 0.80 per unit excess of 400
// Above 600 Rs. 425 plus Rs. 125 per unit excess of 600

#include <iostream>
using namespace std;

int main() {
    float units;
    float cost;
    cout << "Enter the units: ";
    cin >> units;
    if (units <= 200) {
        cost = 0.5 * units;
    } else if (units > 200 && units <= 400) {
        cost = 100 + 0.65 * (units - 200);
    } else if (units > 400 && units <= 600) {
        cost = 230 + 0.8 * (units - 400);
    } else if (units > 600) {
        cost = 425 + 1.25 * (units - 600);
    }

    cout << "The total commission is " << cost << endl;
    return 0;
}
