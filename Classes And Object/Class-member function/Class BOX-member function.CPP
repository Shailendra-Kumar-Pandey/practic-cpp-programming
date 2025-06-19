/* Write a Program to calculate and print using Box class, object and class member function */
#include<iostream>
using namespace std;
class Box{
    public:
        double lenght;
        double height;
        double breadth;
        double getvolume()      // this is a member function Declaration
        {
            return lenght * height * breadth;
        }
        void setlenght(double l)
        {
            lenght = l;
        }
        void setheight(double h);
        void setbreadth(double b);
};
void Box::setheight(double h)
{
    height = h;
}
void Box::setbreadth(double b)
{
    breadth = b;
}
int main()
{
    Box box1;
    Box box2;
    double val = 0.0;
    // this is a function calling
    box1.setlenght(5.0);
    box1.setbreadth(7.0);
    box1.setheight(8.0);
    // this is a function calling
    box2.setlenght(11.0);
    box2.setbreadth(18.0);
    box2.setheight(15.0);
    // this is a function calling
    val = box1.getvolume();
    cout<<"Volume of Box-1 = "<<val<<endl;
    cout<<"Volume of Box-1 = "<<box2.getvolume()<<endl;
    return 0;
}
