/* Write a Program to calculate and print area and perimeter class and object rectangale  */
#include<iostream>
using namespace std;
class Rectangale
{   public:
        int length;
        int width;
};
int main()
{
    Rectangale r1;
    Rectangale r2;
    int area = 0, perimeter = 0;
    r1.length = 120;
    r1.width = 80;
    r2.length = 100;
    r2.width = 60;
    area = r1.length * r1.width;
    perimeter = 2 * (r1.length + r1.width);
    cout<<"Area of Rectangale R-1 = "<<area<<endl;
    cout<<"Perimeter of Rectangale R-1 = "<<perimeter<<endl;
    area = r2.length * r2.width;
    perimeter = 2 * (r2.length + r2.width);
    cout<<"Area of Rectangale R-2 = "<<area<<endl;
    cout<<"Perimeter of Rectangale R-2 = "<<perimeter<<endl;
    return 0;
}
