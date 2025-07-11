/* Write a Program to Class - Polymorphism in c++ */
#include <iostream>
using namespace std;
class Shape         // Base Class
{
    protected:
        int width;
        int height;
    public:
        Shape(int w = 0, int h = 0)
        {
            width = w;
            height = h;
        }
        virtual int area() // Virtual function for area
        {
          cout << "\nParent Class Area "<<endl;
          return 0;
        }
};
class Rectangle : public Shape  // Derived Class
{
    public:
        Rectangle(int a = 0, int b = 0)
        {
           Shape(a, b); // Base class constructor called in initializer list
        }
        int area()  // Override area method
        {
            cout << "\nRectangle Class Area "<<endl;
            return width * height;  // Calculate area of rectangle
        }
};
class Triangle : public Shape  // Derived Class
{
    public:
        Triangle(int a = 0, int b = 0)
        {
            Shape(a, b);    // Base class constructor called in initializer list
        }
        int area()  // Override area method
        {
            cout << "\nTriangle Class Area " << endl;
            int a = (width * height / 2);
            return  a; // Calculate area of rectangle
        }
};
int main()
{
    Shape *s;  // Base class pointer
    Rectangle rec(10, 7);  // Create Rectangle object
    Triangle tri(10, 5);  // Create Triangle object

    s = &rec;  // Point to Rectangle object
    int z =0;
    z = s->area();  // s->area();
    cout << "Area of Rectangle: " << z << endl;  // Call area method

    s = &tri;  // Point to Triangle object
    cout << "Area of Triangle: " << s->area() << endl;  // Call area method

    return 0;
}

