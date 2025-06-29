/* Write a Program to Class - Multiple Inheritance */
#include <iostream>
using namespace std;
// Base class 1
class Shape {
    protected:
        double width;
        double height;
    public:
        void setWidth(double w) {
            width = w;
        }
        void setHeight(double h) {
            height = h;
        }
    };
 // Base class 2 Painting Cost
 class Cost{
    public:
        double getCost(double area) {
            return area * 70;
        }   
 };
// Derived class
class Rectangle : public Shape, public Cost {
    public:
        double getArea() {
            return (width * height);
        }
};
int main() {
    Rectangle rect;
    rect.setWidth(5.0);
    rect.setHeight(3.0);
    
    double area = rect.getArea();
    double cost = rect.getCost(area);
    
    cout << "Area of Rectangle: " << area << endl;
    cout << "Cost of Rectangle: " << cost << endl;
    
    return 0;
}