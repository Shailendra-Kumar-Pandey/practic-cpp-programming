/* Write a Program to using Private access specifier */
#include<iostream>
using namespace std;
class Line {
private: // Private access specifier    
    double length;
public: // Public access specifier
    void setLength(double l); // Function to set the length of the line
    // Function to get the length of the line
    double getLength() {
        return length;
    }
};
void Line::setLength(double l) {
    length = l;
}
int main() {
    Line line; // Declare an object of class Line
    line.setLength(5.0); // Set the length of the line
    cout << "Length of line: " << line.getLength() << endl; // Get and print the length of the line
    // Note: Direct access to public members is generally not recommended in practice,
    return 0;
}
