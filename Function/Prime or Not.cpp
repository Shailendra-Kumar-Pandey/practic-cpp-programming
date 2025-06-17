/* Write a program to chack wether given Number Prime or Not */
#include<iostream>
using namespace std;
int prime_or_not(int);
int main()
{
    int n, result;
    cout<<"Enter any Number finding a Prime Number or Not : ";
    cin>>n;
    if(n <=1 )
        cout<<n<<" is not a Prime Number";
    result = prime_or_not(n);
    cout<<result;
    if(result == 2)
        cout<<n<<" Number is a Prime Number";
    else
        cout<<n<<" Number is Not a Prime Number";
    return 0;
}
int prime_or_not(int x)
{
    int i , count = 0;
    for(i=1; i<x; i++)
    {
        if(x%i==0)
            count++;
    }
    return count;
}