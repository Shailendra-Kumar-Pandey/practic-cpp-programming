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
    while(i < n)
    {
        t = f + s;
        cout<<", "<<t;
        f = s;
        s = t;
        i = i + 1;
    }
    cout<<endl;
    return 0;
}
