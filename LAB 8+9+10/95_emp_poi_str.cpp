// WRITE A C++ PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER
// ,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
// ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
// PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.

#include <iostream>
#include <string>

using namespace std;

// Define the Employee structure
struct Employee
{
    int ENo;       // Employee number
    string EName;  // Employee name
    float Esalary; // Employee salary
};

int main()
{
    const int MAX_EMPLOYEES = 50;   // Maximum allowed employees
    Employee employ[MAX_EMPLOYEES]; // Array of Employee structures
    Employee *ptr = employ;         // Pointer to the Employee structure array

    cout << "Enter the number of employees (max " << MAX_EMPLOYEES << "): ";
    int n;
    cin >> n;

    // Input employee details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        cout << "Employee Number: ";
        cin >> (ptr + i)->ENo; // this-> is used to access the element by pointer as{*(&ENo)}
        cin.ignore();          // To consume the leftover newline character

        cout << "Employee Name: ";
        getline(cin, (ptr + i)->EName);

        cout << "Employee Salary: ";
        cin >> (ptr + i)->Esalary;
    }

    // Display the employee details in a simple tabular format
    cout << "\nEmployee Details:\n";
    cout << "E.No\tE.Name\t\t\tE.Salary\n";
    cout << "----------------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        // Ensure consistent spacing
        cout << (ptr + i)->ENo << "\t";
        cout << (ptr + i)->EName << "\t";

        // // Add tabs for alignment (adjust for shorter/longer names)
        // if ((ptr + i)->EName.length() < 8)
        //     cout << "\t\t";
        // else if ((ptr + i)->EName.length() < 16)
        //     cout << "\t";

        cout << (ptr + i)->Esalary << "\n";
    }

    return 0;
}
