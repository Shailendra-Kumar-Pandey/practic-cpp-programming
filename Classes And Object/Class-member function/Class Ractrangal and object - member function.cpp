/* Write a Program to calculate and print area and Perimeter create Rectangle in class. */
#include<iostream>
using namespace std;
class Rectangale
{   public:
        int length;
        int width;
        void getarea();
        void getperimeter();
        int setlength(int l);
        int setwidth(int w);
};
void Rectangale::getarea()
{
    return length * width;
}
void Rectangale::getperimeter()
{
    return 2 * (length + width);
}
int Rectangale::setlength(int l)
{
    length = l;
}
int Rectangale::setwidth(int w)
{
    width = w;
}

int main()
{
    Rectangale r1;
    Rectangale r2;
    int area = 0, perimeter = 0;
    r1.setlength(120);
    r1.setwidth(80);
    r2.setlength(100);
    r2.setwidth(60);
    area = r1.getarea();
    perimeter = r1.getperimeter();
    cout<<"Area of Rectangale R-1 = "<<area<<endl;
    cout<<"Perimeter of Rectangale R-1 = "<<perimeter<<endl;
    cout<<"Area of Rectangale R-2 = "<<r2.getarea()<<endl;
    cout<<"Perimeter of Rectangale R-2 = "<<r2.getperimeter()<<endl;
    return 0;
}

