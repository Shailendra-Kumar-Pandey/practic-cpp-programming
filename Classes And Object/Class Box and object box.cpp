/* Write a Program to calculate and print volume of box, create Box and box object  */
#include<iostream>
using namespace std;
class Box           //Create Class and declaration, initialization
{   public:
        double length;
        double breadth;
        double height;
};
int main()
{
    Box box1;       // Object Create declaration
    Box box2;
    double volume_box = 0.0;
    // Object initialization
    box1.length = 5.0;
    box1.breadth = 6.0;
    box1.height = 7.0;
    // Object initialization
    box2.length = 11.0;
    box2.breadth = 16.0;
    box2.height = 17.0;
    volume_box = box1.length * box1.breadth * box1.height;
    cout<<"\nVolume of Box-1 = "<<volume_box<<endl;
    volume_box = box2.length * box2.breadth * box2.height;
    cout<<"\nVolume of Box-2 = "<<volume_box<<endl;
    return 0;
}
