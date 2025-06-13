/* Write a program to calculate and print biggest out of 3 number */
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter 3 Number : ";
    cin>>a>>b>>c;
    if(a>b && a>c)
        cout<<"Biggest Number is :- "<<a;
    else
        if(b>c)
            cout<<"Biggest Number is :- "<<b;
         else
            cout<<"Biggest Number is :- "<<c;
    return 0;
}
