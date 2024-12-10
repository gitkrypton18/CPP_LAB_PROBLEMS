// The annual examination results of 10 students are tabulated as follows:
// Roll No. Subject1 Subject2 Subject3
#include <iostream>
using namespace std;

void swap(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

int main()
{
    float arrstudent[5][5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the roll no followed by marks of student " << i + 1 << endl;
        for (int j = 0; j < 4; j++)
        {
            cin >> arrstudent[i][j];
        }
        arrstudent[i][4] = arrstudent[i][1] + arrstudent[i][2] + arrstudent[i][3];
    }

    cout << "Roll_No \t Subject_1\t Subject_2\t Subject_3\t Total" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arrstudent[i][j] << "\t\t ";
        }
        cout << endl;
    }

    // Finding the student with the highest marks
    int maxIndex = 0;
    for (int i = 1; i < 5; i++)
    {
        if (arrstudent[i][4] > arrstudent[maxIndex][4])
        {
            maxIndex = i;
        }
    }
    cout << "The highest marks are obtained by roll no " << arrstudent[maxIndex][0]
         << " and his marks are " << arrstudent[maxIndex][4] << endl;

    return 0;
}
