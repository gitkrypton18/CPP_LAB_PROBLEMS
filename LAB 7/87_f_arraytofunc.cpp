#include <iostream>
#include <string>
using namespace std;

typedef struct student
{
    string name;
    float roll_no;
    float marks;
} ss;

void ReadData(student arr[])
{
    int check, max = 0;
    for (int i = 0; i < 10; i++)
    {

        cout << "Student" << i + 1 << endl;
        cin >> arr[i].name >> arr[i].roll_no >> arr[i].marks;
        return arr[];
    }
    void marksmax()
}
int main()
{
    int i, check;
    float max = 0;
    struct student arr[10];
    cout << "Enter the details as follows:\nName\tRollNo\tMarks\n";

    cout << "Detail of Max Marks Student : " << check + 1 << "\t: ";
    cout << "Name : " << arr[check].name << "\t" << "Roll No : " << arr[check].roll_no << "\t" << "Marks : " << arr[check].marks << endl;

    return 0;
}