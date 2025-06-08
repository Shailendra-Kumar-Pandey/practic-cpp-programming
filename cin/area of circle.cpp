/* write a program to calculate and print area of circle */
#include<iostream>
using namespace std;
int main()
{
    float r, area_circle;
    cout<<"Enter the Radius : ";
    cin>>r;
    area_circle = 3.14 * r * r;
    cout<<"Area of Circle = "<<area_circle;
    return 0;
}