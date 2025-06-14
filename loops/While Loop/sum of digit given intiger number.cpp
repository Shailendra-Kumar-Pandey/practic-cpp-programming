/* Write a Program to print sum of digit giving integer Number */
#include<iostream>
using namespace std;
int main()
{
    int digit, n, sum=0;
    cout<<"Enter any digit Number : ";
    cin>>n;
    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n/10;
    }
    cout<<"Sum = "<<sum;
    return 0;
}