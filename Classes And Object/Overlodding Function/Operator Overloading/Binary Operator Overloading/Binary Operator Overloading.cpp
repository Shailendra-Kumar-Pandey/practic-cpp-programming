/* Write a Program Class - Binary Operator Overloading  */
#include<iostream>
using namespace std;
class Box
{
private:
    double length; // Length of Box
    double width; // Width of Box
    double height; // Height of Box
public:
    double getVolume()
    {
        return length * width * height;
    }
    void setLength(double l)
    {
        length = l;
    }
    void setWidth(double w)
    {
        width = w;
    }
    void setHeight(double h)
    {
        height = h;
    }
    void displayVolume()
    {
        cout << "\nLenght = " << length << "\nWidth = " << width << "\nHeight = " << height << endl;
    }
    // Overload + Operator to add Two Box Objects
    Box operator+(const Box &b)
    {
        Box box;
        box.length = this->length + b.length; // Add lengths
        box.width = this->width + b.width; // Add widths
        box.height = this->height + b.height; // Add heights
        return box; // Return the new Box object
    }
};
int main()
{
    Box box1;       // Declare Box 1 of type Box
    Box box2;       // Declare Box 2 of type Box
    Box box3;       // Declare Box 3 of type Box
    double volume = 0.0; // Variable to store volume of Box

    // Box 1 Specification
    box1.setLength(5.0); // Set length of Box 1
    box1.setWidth(4.0);  // Set width of Box 1
    box1.setHeight(3.0); // Set height of Box 1

    // Box 2 Specification
    box2.setLength(6.0); // Set length of Box 2
    box2.setWidth(5.0);  // Set width of Box 2
    box2.setHeight(4.0); // Set height of Box 2

    // Volume of Box 1
    volume = box1.getVolume(); // Get volume of Box 1
    box1.displayVolume(); // Display Box 1 dimensions
    cout << "Volume of Box 1 = " << volume << endl; // Display volume

    // Volume of Box 2
    volume = box2.getVolume(); // Get volume of Box 2
    box2.displayVolume(); // Display Box 2 dimensions
    cout << "Volume of Box 2 = " << volume << endl; // Display volume

    // Add two object as following
    box3 = box1 + box2; // Use overloaded + operator to add Box 1 and Box 2

    // Volume of Box 3
    box3.displayVolume(); // Display Box 3 dimensions
    volume = box3.getVolume(); // Get volume of Box 3   
    cout << "Volume of Box 3 = " << volume << endl; // Display volume
    return 0; // Return 0 to indicate successful execution
}