/* Write a Program to class This Pointer */
#include<iostream>
using namespace std;
class Box{
    private:
        double length;
        double breadth;
        double height;
    public:
    //Constructor Definition and inisilize
        Box(double l= 2.0, double b = 2.0, double h = 2.0 )
        {
            cout<<"\n Constructor Call...";
            length = l;
            breadth = b;
            height = h;
        }
        double Volume()
        {
            return length * breadth * height;
        }
        void Compare(Box b2)
        {
            return this->Volume()>b2.Volume();
        }
};
int main()
{
    Box box1(3.0, 2.0,4.0);    
    Box box2(10.0, 4.0, 8.0);

    if (box1.Compare(box2))
        cout<<"\nBox1 is Big ";
    else
        cout<<"\n Box2 is Big";
    return 0;
}