/* Write a program to Class - Single - Inheritance */
// Consider a base class Shape and its derived class Rectangle as follows.
#include <iostream>
using namespace std;
// Base class
class Shape
{
    protected:
        int width;
        int height;
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
};
// Derived class
class Rectangle: public Shape
{
    public:
        int getArea()
        {
            return (width * height);
        }
};
int main()
{
    Rectangle rect;

    rect.setWidth(5);
    rect.setHeight(7);
    
    // Print the area of the rectangle
    cout << "Area of Rectangle: " << rect.getArea() << endl;
    
    return 0;
}
// Output: Area of Rectangle: 35  