/* Write a program to class - Parameterized Constructor create */
#include <iostream>
using namespace std;
class Line {
    double length;
public:

    // Constructor with a parameter
    Line(double len);
    // Function to get the length
    double getLength() {
        return length;
    }
    void setLength(double len) {
        length = len;
    }
};
// Constructor function definition
Line::Line(double len) {
        cout << "Object created with length: " << len << endl;
        length = len;
    }
int main() {
    Line line(10.0); // Create an object of Line with length 10.
    cout << "Length of line: " << line.getLength() << endl; // Output the length
    line.setLength(20.0); // Set a new length
    cout << "New length of line: " << line.getLength() << endl; // Output the new length
    return 0;
}
