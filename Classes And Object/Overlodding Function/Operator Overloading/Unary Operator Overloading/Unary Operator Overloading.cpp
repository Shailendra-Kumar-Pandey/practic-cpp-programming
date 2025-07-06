/* Write a Program to Class - Unary Operator Overloading */
#include<iostream>
using namespace std;
class Distance{
private:
    int feet;   // 0 to infinity
    int inches;     // 0 to 12
public:
    // required constructors
    Distance()
    {
        feet = 0;
        inches = 0; 
    }
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    // method to display distance
    void displayDistance()
    {
        cout << "Distance: " << feet << " feet, " << inches << " inches" << endl;
    }
    // overloading minus(-) operator
    Distance operator-()
    {
        feet = -feet; 
        inches = -inches;
        return Distance(feet, inches);   
    }
};
int main()
{
    Distance d1(15, 10), d2(-5, 12);

    -d1;  // apply negation
    d1.displayDistance();  // display d1
      
    -d2;  // apply negation
    d2.displayDistance();  // display d2
    
    return 0;
}