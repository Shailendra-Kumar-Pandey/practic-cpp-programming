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
        virtual int area() // Virtual function for area
        {
          cout << "\nParent Class Area "<<endl;
          return 0;
        }
};
class Rectangle : public Shape  // Derived Class
{
    public:
        Rectangle(int a, int b) : Shape(a, b)
        {
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
        Triangle(int a, int b) : Shape(a, b)
        {
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
    cout << "Area of Rectangle: " << s->area() << endl;  // Call area method

    s = &tri;  // Point to Triangle object
    cout << "Area of Triangle: " << s->area() << endl;  // Call area method

    return 0;
}

