/* Write a Program to read students information using two classes and inheritance. Base class should have following basic info Name, Age, Gender and member functions to accept and display. Derived class Should have Total marks, Grade and member function to accept and display */
#include<iostream>
using namespace std;
class Student {
protected:
    string name;
    int age;
    char gender;
};
class Marks : public Student {
private:
    int totalMarks;
    char grade;

public:
    void accept() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Gender: ";
        cin >> gender;
        cout << "Enter Total Marks: ";
        cin >> totalMarks;
        if (totalMarks >= 90) {
            grade = 'A';
        } else if (totalMarks >= 80) {
            grade = 'B';
        } else if (totalMarks >= 70) {
            grade = 'C';
        } else if (totalMarks >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }   
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main() {
    Marks student;
    student.accept();
    student.display();
    return 0;
}