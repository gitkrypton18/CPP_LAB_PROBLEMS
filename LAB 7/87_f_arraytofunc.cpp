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

void ReadData(ss stu[], int size) // reading student data
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the details of Student " << i + 1 << endl;
        cout << "Enter the name" << endl;

        getline(cin, stu[i].name); // get the complete string with spaces
        cout << "Enter the rollNo" << endl;
        cin >> stu[i].roll_no;
        cout << "Enter the Marks" << endl;
        cin >> stu[i].marks;
        cin.ignore(); // get the new line cleared before  next gets printed
    }
}
void MarksMax(ss stu[], int size) // finding maxmarks function
{

    int i;
    cout << "Max marks Students :" << endl;
    for (i = 0; i < size; i++)
    {
        if (stu[i].marks > 500)
        {
            cout << stu[i].name << "\t\t"
                 << stu[i].roll_no << "\t\t"
                 << stu[i].marks << endl;
        }
    }
}
int main()
{
    ss stu[10];
    ReadData(stu, 10);
    MarksMax(stu, 10);

    return 0;
}