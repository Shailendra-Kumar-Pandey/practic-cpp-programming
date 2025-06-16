/* Write a Program to calculate and print biggest out of 3 */
#include<iostream>
using namespace std;
int biggest(int, int, int);
int main()
{
    int a, b, c, big;
    cout<<"Enter the 3 Number : ";
    cin>>a>>b>>c;
    big = biggest(a, b, c);
    cout<<"Biggest Number is = "<<big<<endl;
    return 0;
}
int biggest(int x, int y, int z)
{
    if(x>y && x>z)
        return x;
    else
        if(y>z)
            return y;
        else
            return z;
}
