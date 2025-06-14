/* Write a Program to print all the number between 11 to 200 which are divisible by 4 and 5. */
#include<iostream>
using namespace std;
int main()
{
    int i = 10;
    cout<<"All the Number between 11 to 200 divisible by 4 and 5 :- "<<endl;
    while(i < 201)
    {
        i = i + 1;
        if(i%4 == 0 && i%5 == 0)
            cout<<" "<<i<<endl;
    }
    return 0;
}
