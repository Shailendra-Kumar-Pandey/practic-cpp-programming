/* Write a program to calculate and print 1st 20 prime number and 0 to 1 check prime or not this program*/
#include<iostream>
using namespace std;
int main()
{
    int i, j, c =0;
    for (i=0; c<20; i++)
    {
        if(i<=1)
            continue;           //Jump the next command
        for(j=2; j<i; j++)
        {
            if(i%j==0)
                break;         // Stop the loop if i is divisible by j
        }
        if(i==j)
        {
            cout<<" "<<i;
            c++;
        }
    }
    return 0;
}
