/* Write a Program to print number of votes secure by winner in a election consider 5 condidates */
#include<iostream>
using namespace std;
int main()
{
    int ec, c1=0, c2=0, c3=0, c4=0, c5=0;
    cout<<"C-1 = 1; C-2 = 2; C-3 = 3; C-4 = 4; C-5 = 5 "<<endl;
    do
    {
        cout<<"Please Enter Your Votes in Favorite Candidate....";
        cin>>ec;
        switch (ec)
        {
        case 1:
            c1 = c1 + 1;
            cout<<"Your Vote in C-1..."<<endl;
            break;
        case 2:
            c2 = c2 + 1;
            cout<<"Your Vote in C-2..."<<endl;
            break;
        case 3:
            c3 = c3 + 1;
            cout<<"Your Vote in C-3..."<<endl;
            break;
        case 4:
            c4 = c4 + 1;
            cout<<"Your Vote in C-4..."<<endl;
            break;
        case 5:
            c5 = c5 + 1;
            cout<<"Your Vote in C-5..."<<endl;
            break;
        case 6:
            cout<<"C-1 Votes = "<<c1<<endl<<"C-2 Votes = "<<c2<<endl<<"C-3 Votes = "<<c3<<endl<<"C-4 Votes = "<<c4<<endl<<"C-5 Votes = "<<c5<<endl;
            break;
        default:
            cout<<"Invalid Vote Please Enter Valid Vote..."<<endl;
        }
        if (ec == 6)
        {
            cout<<"Final Result..."<<endl;
            if(c1>c2 && c1>c3 && c1>c4 && c1>c5)
                cout<<"The Winner is C-1 with Votes "<<c1;
            else
                if (c2>c3 && c2>c4 && c2>c5)
                    cout<<"The Winner is C-2 with Votes "<<c2;
                else
                    if(c3>c4 && c3>c5)
                        cout<<"The Winner is C-3 with Votes "<<c3;
                    else
                        if(c4>c5)
                            cout<<"The Winner is C-4 with Votes "<<c4;
                        else
                            cout<<"The Winner is C-5 with Votes "<<c5;
        }
    }while(ec != 6);
    return 0;
}
