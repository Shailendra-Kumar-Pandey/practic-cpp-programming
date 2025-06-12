/* write a program to print of given Number */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a, i;
    cout<<"Enter any Number...";
    cin>>a;
    cout<<"Table of "<<a<<" is...."<<endl;
    for(i=1; i<=10; i++)
    {
        cout<<a<<setw(4)<<"*"<<setw(4)<<i<<setw(4)<<"="<<setw(4)<<a*i<<endl;
    }
    return 0;
}