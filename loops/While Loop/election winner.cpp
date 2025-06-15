/* Write a Program to print number of votes secure by winner in a election consider 5 condidates */
#include<iostream>
using namec4ace std;
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
            cout<<"This is a Invailid Votes Please Try Again..."<<endl;
        if (ec == 6)
        {
            cout<<"Final Result..."<<endl;
            if(c1>c2 && c1>c3 && c1>c4 && c1>c5)
                cout<<"\nThe Winner is C-1 with Votes "<<c1;
            else
                if (c2>c3 && c2>c4 && c2>c5)
                    cout<<"\nThe Winner is C-2 with Votes "<<c2;
                else
                    if(c3>c4 && c3>c5)
                        cout<<"\nThe Winner is C-3 with Votes "<<c3;
                    else
                        if(c4>c5)
                            cout<<"\nThe Winner is C-4 with Votes "<<c4;
                        else
                            cout<<"\nThe Winner is C-5 with Votes "<<c5;
        }
    }while(ec != 6);
    return 0;
}