/* Write a Program to Assignment in C++ */
/*                 ABC Co. Pvt. Ltd
                       Nagpur
             Employee Management System

                        MENU
            1) Add Employee
            2) Edit Employee
            3) Delete Employee
            4) Display Employee
            5) Salary Register
            6) Exit

        Enter your choice (1-6): ___

&

using this content-

             Salary Register

Emp No.     Name       Bsalary      Allowances        Deductions       Net Salary


*/
#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
    private:
        int employeeCode;
        char employeeName[30];
        double bSalary;
        double allowances;
        double deductions;
        double netSalary;
    public:

};
int main()
{
    Employee e1;

    ofstream edata;
    edata.open("edata.dat");

    int choice = 0;

    do{
        cout<< "ABC Co. Pvt. Ltd Nagpur \n";
        cout<< "Employee Management System -\n";
        cout<< "---MENU---\n";
        cout << " 1) Add Employee \n";
        cout << " 2) Edit Employee\n";
        cout << " 3) Delete Employee\n";
        cout << " 4) Display Employee\n";
        cout << " 5) Salary Register\n";
        cout << " 6) Exit\n";
        cout << "Enter your choice (1-6) : ";
        switch (choice)
        {
        case 1:
            cout << "Adding Employee...\n";
            cout << "Enter Employee Code: ";
            cin >> e1.employeeCode;
            cout << "Enter Employee Name: ";
            cin.ignore(); // Clear the newline character from the input buffer
            cin.getline(e1.employeeName, 30);
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:
            if(choice<0 || choice>6)
            {
                cout << "Invalid choice! Please enter a number between 1 and 6.\n";
                continue;
            }
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 6.\n";
            break;
        }
    }while(choice!=6);

    return 0;
}
