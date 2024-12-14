#include <iostream>
#include <string>
using namespace std;

struct BookInfo
{
    int PubYear;
    string Name;
    string AuthorName;
};

void bookinfoRead(BookInfo *Book)
{
    cout << "Enter the book Name :" << endl;
    getline(cin, *Book.Name);
    cout << "Enter the Author Name :" << endl;
    getline(cin, *Book.AuthorName);
    cout << "Enter the Publication Year :" << endl;
    cin > Book.PubYear;
}

void bookinfoDisplay(BookInfo *Book)
{
    cout << "The book Name is : " << Book.Name << endl;
    cout << "The Author Name is : " << Book.AuthorName << endl;
    cout << "The Publication Year is : " << Book.PubYear << endl;
}
int main()
{

    BookInfo Book;
    bookinfoRead(&Book);
    bookinfoDisplay(&Book);

    return 0;
}