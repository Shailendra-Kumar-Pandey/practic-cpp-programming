/* Write a Program to read and print employee's information using classes and multiple inheritance */
#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void acceptInfo() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
class Employee : public Person {
protected:
    string employeeID;
    string department;
public:
    void acceptEmployeeInfo() {
        acceptInfo(); // Call base class method to accept personal info
        cout << "Enter employee ID: ";
        cin >> employeeID;
        cout << "Enter department: ";
        cin >> department;
    }
    void displayEmployeeInfo() {
        displayInfo(); // Call base class method to display personal info
        cout << "Employee ID: " << employeeID << ", Department: " << department << endl;
    }
};
class Manager : public Employee {
protected:
    string teamSize;
public:
    void acceptManagerInfo() {
        acceptEmployeeInfo(); // Call derived class method to accept employee info
        cout << "Enter team size: ";
        cin >> teamSize;
    }
    void displayManagerInfo() {
        displayEmployeeInfo(); // Call derived class method to display employee info
        cout << "Team Size: " << teamSize << endl;
    }
};
int main() {
    Manager managerObj;

    // Accept manager information
    managerObj.acceptManagerInfo();

    // Display manager information
    cout << "Manager Information:" << endl;
    managerObj.displayManagerInfo();

    return 0;
}