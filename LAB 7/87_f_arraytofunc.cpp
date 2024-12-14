/*WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE
INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING
ARRAY OF STRUCTURE INTO FUNCTION).*/

#include <iostream>
#include <string>
using namespace std;

typedef struct student // defining a structure containing the student data like name roll no and marks
{
    string name;
    float roll_no;
    float marks;
} ss;

void ReadData(ss stu[10]) // reading student data
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the details of Student " << i + 1 << endl;
        cout << "Enter the name" << endl;
        cin.ignore();              // to remove the new line character
        getline(cin, stu[i].name); // get the complete string with spaces
        cout << "Enter the rollNo" << endl;
        cin >> stu[i].roll_no;
        cout << "Enter the Marks" << endl;
        cin >> stu[i].marks;
    }
}
void MarksMax(ss stu[10]) // finding maxmarks function
{
    int j = 0; // keeping counter for which student getting more marks
    int initialmarks = 0;
    int i;
    for (i = 0; i < 10; i++)
    {

        if (stu[i].marks > initialmarks)
        {
            initialmarks = stu[i].marks;
            j = i;
        }
    }

    cout << "Max marks Student :" << stu[j].name << endl
         << stu[j].roll_no << endl
         << stu[j].marks << endl;
}
int main()
{
    ss stu[10];
    ReadData(stu);
    MarksMax(stu);

    return 0;
}