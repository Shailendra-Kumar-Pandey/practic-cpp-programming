/* Write a Program to Class - Polymorphism in c++ */
#include <iostream>
using namespace std;
class Shape         // Base Class
{
    protected:
        int width;
        int height;
    public:
        Shape(int w, int h)
        {
            width = w;
            height = h;
        }
        virtual int area()
        {
            cout << "\nParent Class Area ";
            return 0;
        }
};
class Rectangle : public Shape  // Derived Class
{
    public:
        Rectangle(int a = 0, int b = 0) : Shape(a, b)
        {
            // Base class constructor called in initializer list
        }
        int area()  // Override area method
        {
            cout << "\nRectangle Class Area ";
            return width * height;  // Calculate area of rectangle
        }
};
class Triangle : public Shape  // Derived Class
{
    public:
        Triangle(int a = 0, int b = 0) : Shape(a, b)
        {
            // Base class constructor called in initializer list
        }
        int area()  // Override area method
        {
            cout << "\nTriangle Class Area ";
            return (width * height / 2);  // Calculate area of rectangle
        }
};
int main()
{
    Shape *shape;  // Base class pointer
    Rectangle rec(10, 7);  // Create Rectangle object
    Triangle tri(10, 5);  // Create Triangle object

    shape = &rec;  // Point to Rectangle object
    cout << "Area of Rectangle: " << shape->area() << endl;  // Call area method

    shape = &tri;  // Point to Triangle object
    cout << "Area of Triangle: " << shape->area() << endl;  // Call area method

    return 0;
}

