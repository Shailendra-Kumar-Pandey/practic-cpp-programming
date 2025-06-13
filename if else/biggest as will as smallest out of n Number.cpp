/* Write a program to calculate and print biggest as will as smallest out of n Number */
#include<iostream>
using namespace std;
int main()
{
    int i, n, small, big, next;
    cout<<"How many Number compare :- ";
    cin>>n;
    cout<<"Enter First Number :- ";
    cin>>small;
    big = small;
    for(i = 0; i<=n; i ++)
    {
        cout<<"Enter next Number :- ";
        cin>>next;
        if(small>next)
            small = next;
        if(big<next)
            big = nest;
    }
    cout<<"Biggest Number is = "<<big;
    cout<<"Smallest Number is = "<<small;
    return 0;
}