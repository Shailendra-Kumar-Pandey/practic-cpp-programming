/* Write to Program to print and create constractor function */
#include<iostream>
using namespace std;
class Line
{
    double length;
    public:
        void setLength(double l){
            length = l;
        }
        double getLength(){
            return length;
        }
        Line();
};
Line::Line(){
    length = 5.0;
    cont<<"\n Create an Object automatic call Function...";
}
int main()
{
    Line l1;
    cout<<"\n Length = "<<l1.getLength()<<endl;
    l1.setLength(10.0);
    cout<<"\n Length = "<<l1.getLength()<<endl;
    return 0;
}