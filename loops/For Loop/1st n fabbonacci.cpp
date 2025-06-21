/* Write a Program to generate and print 1st n Fibonacci Number */
#include<iostream>
using namespace std;
int main()
{
    int f = 0, s = 1, i = 2, n, t;
    cout<<"How many find Fibonacci Number : ";
    cin>>n;
    cout<<"Fibonacci Number...";
    cout<<" "<<f<<", "<<s;
    for(i=2; i < n; i++)
    {
        t = f + s;
        cout<<", "<<t;
        f = s;
        s = t;
    }
    cout<<endl;
    return 0;
}
