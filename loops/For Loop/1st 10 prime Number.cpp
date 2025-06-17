/* Write a Program to genrate and Print 1st to 10 Prime Number using loop find it */
#include<iostream>
using namespace std;
int main()
{
    int i, j,count=11;
    for(i=1; i<count;i++)
    {
        for(j=1; j<i; j++)
        {
            if(j%i==0)
                break;
        }
        if(i==j)
        {
            cout<<" "<<i;
            count = count + 1;
        }
    }
    return 0;
}
