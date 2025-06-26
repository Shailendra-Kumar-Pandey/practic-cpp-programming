/* Write a Program to class This Pointer */
#include<iostream>
using namespace std;
class Box{
    private:
        double length;      // Length of a box
        double breadth;     // Breadth of a box
        double height;      // Height of a box
    public:
    //Constructor Definition and initialize
        Box(double l= 2.0, double b = 2.0, double h = 2.0 )
        {
            cout<<"\n Constructor Called..."<<endl;
            length = l;
            breadth = b;
            height = h;
        }
        double Volume()
        {
            return length * breadth * height;
        }
        int Compare(Box b2)
        {
            return this->Volume() > b2.Volume();        // Compare the volume of two boxes and alway using 'this' pointer use arrow operator
        }
};
int main()
{
    Box box1(3.0, 2.0,4.0);         // Declare Box1
    Box box2(10.0, 4.0, 8.0);       // Declare Box2

    if (box1.Compare(box2))
    {
        cout<<"\nBox-2 is Smaller than Box-1..."<<endl;
    }else{
            cout<<"\nBox-2 is equal to or larger than Box-1..."<<endl;
    }
    return 0;
}
// Output:
// Constructor Call...
// Constructor Call...
// Box-2 is Smaller than Box-1...
