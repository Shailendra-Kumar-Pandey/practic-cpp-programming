/* Write a program to generate and print sum of 1st 10 odd number */
#include<iostream>
using namespace std;
int main()
{
    int i = -1,c = 0,sum;
    while(c<10)
    {
        i = i + 2;
        sum = sum + i;
        c = c + 1;
    }
    cout<<"1st 10 odd Number Sum = "<<sum;
    return 0;  
}