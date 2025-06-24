/* Write a Program to calculate and Print - Construactor and Destructor */
#include <iostream>
using namespace std;
class Line {
    double length;
public:
    Line(); // This is a Constructor
    ~Line(); // This is a Destructor
    double getLength() {
        return length;
    }
    void setLength(double l) {
        length = l;
    }
};
// Constructor function definition
Line::Line() {
    cout << "Object is being created...";
}
// Destructor function definition
Line::~Line() {
    cout << "Object is being deleted...";
}
int main() {
    Line line; // Create an object of Line
    line.setLength(10.0); // Set the length of the line
    cout << "\nLength of line: " << line.getLength() << endl; // Output the length
    return 0; // The destructor will be called automatically when the object goes out of scope
}
// Output:
// Object is being created...
// Length of line: 10
// Object is being deleted...