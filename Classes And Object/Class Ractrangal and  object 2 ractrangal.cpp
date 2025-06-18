/* Write a Program to calculate and print area and parimeter class and object rectrangal  */
#include<iostream>
using namespace std;
class Rectrangal
{   public:
        int length;
        int width;
};
int main()
{
    Rectrangal r1;
    Rectrangal r2;
    int area = 0, parimeter = 0;
    r1.length = 120;
    r1.width = 80;
    r2.length = 100;
    r2.width = 60;
    area = r1.length * r1.width;
    parimeter = 2 * (r1.length + r1.width);
    cout<<"Area of Rectrangal R-1 = "<<area<<endl;
    cout<<"Parimeter of Rectrangal R-1 = "<<parimeter<<endl;
    area = r2.length * r2.width;
    parimeter = 2 * (r2.length + r2.width);
    cout<<"Area of Rectrangal R-2 = "<<area<<endl;
    cout<<"Parimeter of Rectrangal R-2 = "<<parimeter<<endl;
    return 0;
}
