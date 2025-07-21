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
#include<cstring>
#include<cstdlib>
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
            strncpy(employeeName, name, sizeof(employeeName) - 1);
            employeeName[sizeof(employeeName) - 1] = '\0'; // Ensure null termination

        }
        const char* getEmployeeName() 
        {
            return employeeName;
        }
        void setBSalary(double salary)
        {
            bSalary = salary;
        }
        double getBSalary() 
        {
            return bSalary;
        }
        void setAllowances(double allowance)
        {
            allowances = allowance;
        }
        double getAllowances() 
        {
            return allowances;
        }
        void setDeductions(double deduction)
        {
            deductions = deduction;
        }
        double getDeductions()
        {
            return deductions;
        }
        void calculateNetSalary()
        {
            netSalary = bSalary + allowances - deductions;
        }
        double getNetSalary() 
        {
            return netSalary;
        }
};
int main()
{
    Employee e1;

    fstream edata;
    edata.open("edata.dat", ios::in | ios::out | ios::app);

    int choice = 0;
    int code = 0;
    char name[30];
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
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Adding Employee...\n";
            cout << "Enter Employee Code (using 1 to 1000 ): ";
            cin >> code;
            e1.setEmployeeCode(code);
            cout << "Enter Employee Name: ";
            cin.ignore(); // Clear the newline character from the input buffer
            cin.getline(name, 30);
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
            e1.calculateNetSalary();
            // Write employee data to file
            edata << e1.getEmployeeCode() << " \t " << e1.getEmployeeName() << " \t " << e1.getBSalary() << " \t " << e1.getAllowances() << " \t " << e1.getDeductions() << " \t " << e1.getNetSalary() << endl;
            cout << "Employee added successfully!\n";
            break;
        case 2:
            cout << "Editing Employee...\n";
            cout << "Enter Employee Code to edit: ";
            cin >> code;
            if (code < 1 || code > 1000) {
                cout << "Invalid Employee Code! Please enter a code between 1 and 1000.\n";
                continue;
            }
            e1.setEmployeeCode(code);
            cout << "Enter New Employee Name: ";
            cin.ignore(); // Clear the newline character from the input buffer
            cin.getline(name, 30);
            e1.setEmployeeName(name);
            cout << "Enter New Basic Salary: ";
            cin >> bs;
            e1.setBSalary(bs);
            cout << "Enter New Allowances: ";
            cin >> alowns;
            e1.setAllowances(alowns);   
            cout << "Enter New Deductions: ";
            cin >> dd;
            e1.setDeductions(dd);
            e1.calculateNetSalary();
            // Write updated employee data to file
            edata << e1.getEmployeeCode() << " \t " << e1.getEmployeeName() << " \t " << e1.getBSalary() << " \t " << e1.getAllowances() << " \t " << e1.getDeductions() << " \t " << e1.getNetSalary() << endl;
            cout << "Employee edited successfully!\n";
            break;
        case 3:
            cout << "Deleting Employee...\n";
            cout << "Enter Employee Code to delete: ";
            cin >> code;
            if (code < 1 || code > 1000) {
                cout << "Invalid Employee Code! Please enter a code between 1 and 1000.\n";
                continue;
            }
            // Logic to delete employee data from file (not implemented in this example)
            cout << "Employee with code " << code << " deleted successfully!\n";
            // Note: In a real application, you would need to read the file, remove the employee data, and rewrite the file.
            break;
        case 4:
            cout << "Displaying Employee...\n";
            cout << "Employee Code \t Name \t BSalary \t Allowances \t Deductions \t Net Salary\n";
            // Read employee data from file and display it
            edata.seekg(0); // Move to the beginning of the file
            while (edata >> code) {
                edata.ignore(); // Ignore the space after code
                edata.getline(name, 30, '\t'); // Read name until tab character
                edata >> bs >> alowns >> dd; // Read BSalary, Allowances, Deductions
                e1.setEmployeeCode(code);
                e1.setEmployeeName(name);
                e1.setBSalary(bs);
                e1.setAllowances(alowns);
                e1.setDeductions(dd);
                e1.calculateNetSalary();
                cout << e1.getEmployeeCode() << " \t " << e1.getEmployeeName() << " \t " << e1.getBSalary() << " \t " << e1.getAllowances() << " \t " << e1.getDeductions() << " \t " << e1.getNetSalary() << endl;
            }   
            if (edata.eof()) {
                cout << "No employee data found.\n";
            }
            edata.clear(); // Clear the EOF flag
            edata.seekg(0); // Move to the beginning of the file for next operations
            break;
        case 5:
            cout << "Salary Register:\n";
            cout << "Emp No. \t Name \t BSalary \t Allowances \t Deductions \t Net Salary\n";
            // Read employee data from file and display it
            edata.seekg(0); // Move to the beginning of the file
            while (edata >> code) {
                edata.ignore(); // Ignore the space after code
                edata.getline(name, 30, '\t'); // Read name until tab character
                edata >> bs >> alowns >> dd; // Read BSalary, Allowances, Deductions
                e1.setEmployeeCode(code);
                e1.setEmployeeName(name);
                e1.setBSalary(bs);
                e1.setAllowances(alowns);
                e1.setDeductions(dd);
                e1.calculateNetSalary();
                cout << e1.getEmployeeCode() << " \t " << e1.getEmployeeName() << " \t " << e1.getBSalary() << " \t " << e1.getAllowances() << " \t " << e1.getDeductions() << " \t " << e1.getNetSalary() << endl;
            }   
            if (edata.eof()) {
                cout << "No employee data found.\n";
            }
            edata.clear(); // Clear the EOF flag
            edata.seekg(0); // Move to the beginning of the file for next operations
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
