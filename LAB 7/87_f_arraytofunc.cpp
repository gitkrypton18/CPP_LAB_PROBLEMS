/*WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE
INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING
ARRAY OF STRUCTURE INTO FUNCTION).*/

#include <iostream>
#include <string>
using namespace std;

typedef struct student
{
    string name;
    float roll_no;
    float marks;
} ss;

// void ReadData(ss stu[10])
// {
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "Enter the name" << endl;
//         cin >> stu[i].name;
//         cout << "Enter the rollNo" << endl;
//         cin >> stu[i].roll_no;
//         cout << "Enter the Marks" << endl;
//         cin >> stu[i].marks;
//     }
// }
// void marksmax(student stu[])
// {
//     int initialmarks = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         if (stu[i].marks > initialmarks)
//         {
//             initialmarks = stu[i].marks;
//         }
//         else
//         {
//             cout << i;
//         }
//     }
// }
int main()
{
    ss stu[10];
    int initialmarks = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the details of Student " << i + 1 << endl;
        cout << "Enter the name" << endl;

        cin.ignore();
        getline(cin, stu[i].name);
        cout << endl;
        cout << "Enter the rollNo" << endl;
        cin >> stu[i].roll_no;
        cout << "Enter the Marks" << endl;
        cin >> stu[i].marks;
    }
    int i;
    for (i = 0; i < 10; i++)
    {

        if (stu[i].marks >= initialmarks)
        {
            initialmarks = stu[i].marks;
        }
        else
            break;
    }

    cout << "Max marks Student is of the roll no " << i << endl;
    return 0;
}