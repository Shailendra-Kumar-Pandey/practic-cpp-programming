/* Write a Program to Class-Friend Function */
#include <iostream>
using namespace std;
class Box{
    private:
        double length;
    public:
        void setLength(double len);   
        // Friend function declaration
        friend void printLength(Box b2);
};
// Friend function definition
void printLength(Box b2) {
    cout << "\nLength of box : " << b2.length << endl;
}
void Box::setLength(double len) {
    length = len;
}
int main()
{
    Box b1;
    b1.setLength(10.0);
    
    // Call friend function to print length
    printLength(b1);
    
    return 0;
}
// Output:
// Length of box : 10
// Explanation: The friend function printLength can access the private member length of class Box.
// The setLength function is used to set the value of length.
// The main function creates an object of Box, sets its length, and then calls the friend function to print the length.
// The program demonstrates the use of a friend function to access private members of a class.
// Note: The friend function is not a member of the class, but it can access the private members of the class.
// The friend function is defined outside the class, but it has
