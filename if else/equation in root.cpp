/* write a program to calculate and print Roots of equation ax^2+bx+c */
#include<iostream>
using namespace std;
int main()
{
    int a, b, c, x;
    cout<<"Enter the Value a, b and c : ";
    cin>>a>>b>>c;
    x = (a*a) + (4*b*c);
    if(x = 0)
        cout<<"good";
    if(x < 0)
        cout<<"better";
    if(x > 0)
        cout<<"best";
    return 0;
}
