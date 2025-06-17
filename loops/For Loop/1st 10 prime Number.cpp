/* Write a Program to generate and Print 1st to 10 Prime Number using loop find it */
#include<iostream>
using namespace std;
int main()
{
    int i, j,c=0;
    for(i=2; c<10;i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
                break;
        }
            if(i==j)
            {
                cout<<" "<<i;
                c = c + 1;
            }
    }
    return 0;
}
