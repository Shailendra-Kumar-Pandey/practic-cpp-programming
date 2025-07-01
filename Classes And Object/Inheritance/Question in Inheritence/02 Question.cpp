/* Write a Program to read and print students information using two base classes and derived class.
 Base class1 should have basic info Name,Gender and marks of 5 subjects. Base class2 should have info like Total Marks and Percent.
  Both base classes should contain member functions to accept and display. Derived class should have grade and member function to
  calculate accept and display. */
#include <iostream>
#include <string>
using namespace std;
class Base1 {
protected:
    string name;
    string gender;
    int marks[5];
public:
    void accept() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Gender: ";
        getline(cin, gender);
        cout << "Enter marks of 5 subjects: ";
        for (int i = 0; i < 5; ++i) {
            cin >> marks[i];
        }
        cin.ignore(); // To clear the newline after entering marks
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};
class Base2 {
protected:
    int totalMarks;
    float percent;
};
class Derived : public Base1, public Base2 {
public:
    void calculate() {
        totalMarks = 0;
        for (int i = 0; i < 5; ++i) {
            totalMarks += marks[i];
        }
        percent = static_cast<float>(totalMarks) / 5;
    }

    void display() {
        Base1::display();
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << percent << "%" << endl;
        cout << "Grade: ";
        if (percent >= 90) {
            cout << "A" << endl;
        } else if (percent >= 75) {
            cout << "B" << endl;
        } else if (percent >= 50) {
            cout << "C" << endl;
        } else {
            cout << "D" << endl;
        }
    }
};
int main() {
    Derived student;
    student.accept();
    student.calculate();
    student.display();
    return 0;
}
