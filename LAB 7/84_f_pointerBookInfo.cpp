#include <iostream>
#include <string>
using namespace std;

struct BookInfo
{
    int PubYear;
    string Name;
    string AuthorName;
};

void bookinfoRead(BookInfo *Book) // taking the address of the variable data type in this function
{
    cout << "Enter the book Name :" << endl;
    getline(cin, Book->Name); // -> operator can be used to access the elements of the structure
    cout << "Enter the Author Name :" << endl;
    getline(cin, Book->AuthorName);
    cout << "Enter the Publication Year :" << endl;
    cin >> Book->PubYear;
}

void bookinfoDisplay(BookInfo *Book) // taking the address of the variable data type in this function
{
    cout << "The book Name is : " << Book->Name << endl;
    cout << "The Author Name is : " << Book->AuthorName << endl;
    cout << "The Publication Year is : " << Book->PubYear << endl;
}

int main()
{
    BookInfo Book;

    // Reading and displaying book information using pointers
    bookinfoRead(&Book);
    bookinfoDisplay(&Book);

    return 0;
}
