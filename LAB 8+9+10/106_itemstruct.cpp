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
void ReadItem(Item &product) // always remember to use & in a structure to store data
{

    cout << "Enter the name" << endl;
    getline(cin, product.Item_Name);
    cout << "Enter the quantity" << endl;
    cin >> product.Quantity;
    cout << "Enter the price" << endl;
    cin >> product.Price;
}
void Output(Item product)
{
    cout << "Item Name : " << product.Item_Name << endl;
    cout << "Quantity : " << product.Quantity << endl;
    cout << "Price : " << product.Price << endl;
    cout << "The Amount is : " << product.Price * product.Quantity << endl;
}

int main()
{

    struct Item product;
    cout << "Enter the product Details" << endl;
    ReadItem(product);
    Output(product);
    return 0;
}