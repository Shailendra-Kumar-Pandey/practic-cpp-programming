/* Write a program to class - Perameterial Constructor create */
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
// Member function definition
Line::Line(double len) {
        cout << "Object created with length: " << length << endl;
        length = len;
    }