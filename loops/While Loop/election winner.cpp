/* Write a Program to print number of votes secure by winner in a election consider 5 condidates */
#include<iostream>
using namespace std;
int main()
{
    int ec, c1, c2, c3, c4, c5, winner=0;
    do
    {
        cout<<"Please Enter Your Votes in Favrate Condidate....";
        cin>>ec;
        if(ec == 1)
           c1 = c1 + 1; 
        if(ec == 2)
            c2 = c2 + 1;
        if(ec == 3)
            c3 = c3 + 1;
        if(ec == 4)
            c4 = c4 + 1;
        if(ec == 5)
            c5 = c5 + 1;
        if(ec<0 || ec>6)
            cout<<"This is a Invailid Votes Please Try Again...";
    }while(ec != 6);
    return 0;
}