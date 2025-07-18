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
        void setEmployeeCode(int code)
        {
             employeeCode = code;
        }
        int getEmployeeCode() const
        {
            return employeeCode;
        }
        void setEmployeeName(const char *name)
        {

        }
        const char* getEmployeeName() const
        {
            return employeeName;
        }
        void setBSalary(double salary)
        {
            bSalary = salary;
        }
        double getBSalary() const
        {
            return bSalary;
        }
        void setAllowances(double allowance)
        {
            allowances = allowance;
        }
        double getAllowances() const
        {
            return allowances;
        }
        void setDeductions(double deduction)
        {
            deductions = deduction;
        }
        double getDeductions() const
        {
            return deductions;
        }
        void calculateNetSalary()
        {
            netSalary = bSalary + allowances - deductions;
        }
};
int main()
{
    Employee e1;

    ofstream edata;
    edata.open("edata.dat");

    int choice = 0;
    int code = 0;
    char name;
    double bs = 0.0;
    double alowns = 0.0;
    double dd = 0.0;

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
            cout << "Enter Employee Code (using 1 to 1000 ): ";
            cin >> code;
            e1.setEmployeeCode(code);
            cout << "Enter Employee Name: ";
            cin.ignore(); // Clear the newline character from the input buffer
            cin.getline(edata, 30);
            e1.setEmployeeName(name);
            cout << "Enter Basic Salary: ";
            cin >> bs;
            e1.setBSalary(bs);
            cout << "Enter Allowances: ";
            cin >> alowns;
            e1.setAllowances(alowns);
            cout << "Enter Deductions: ";
            cin >> dd;
            e1.setDeductions(dd);
            edata<< e1.setEmployeeCode() << " \t " << e1.getEmployeeName() << " \t " << e1.getBSalary() << " \t " << e1.getAllowances() << " \t " << e1.getDeductions() << " \t " << e1.calculateNetSalary()<< endl;
            cout << "Employee added successfully!\n";
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
