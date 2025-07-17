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


    }while(choice!=6);

    return 0;
}
