/*CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY,
PRICE AND
AMOUNT. IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND
PRICE AS
INPUT AND CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT.*/
#include <iostream>
#include <string>
using namespace std;
struct Item
{
    string Item_Name;
    int Quantity;
    int Price;
};
// in input void we use address fitting of the variables
void ReadItem(int n, Item item[]) // always remember to use & in a structure to store data
{
    for (int i = 0; i < n; i++)
    {

        cout << "Enter the name" << endl;
        getline(cin, item[i].Item_Name);
        cout << "Enter the quantity" << endl;
        cin >> item[i].Quantity;
        cout << "Enter the price" << endl;
        cin >> item[i].Price;
        cin.ignore();
    }
}
void Output(int n, Item item[])
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {

        cout << "The Amount of " << item[i].Item_Name << " is : " << item[i].Price * item[i].Quantity << endl;
    }
}

int main()
{
    cout << "No of Products ?" << endl;
    int n;
    cin >> n;
    cin.ignore();
    struct Item item[n];

    cout << "Enter the product Details" << endl;
    ReadItem(n, item);
    Output(n, item);
    return 0;
}
