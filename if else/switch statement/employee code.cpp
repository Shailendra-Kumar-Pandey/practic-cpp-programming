/* Write a Program to count number of Male and Female employees in a company.
Consider codes as for male employee = 1, for female employee = 2, To stop =3. */
#include<iostream>
using namespace std;
int  main()
{
    int ec=0, total=0, male=0, female=0;
    do
        {
            cout<<"Enter Employee Code (1-3) :";
            cin>>ec;
            switch (ec)
            {
            case 1:
                male = male + 1;
                break;
            case 2:
                female = female + 1;
                break;
            case 3:
                break;
            default:
                cout<<"Please Enter Valid Employee Code....";
            }
        }while(ec!=3);
    total = male + female;
    cout<<" Males = "cout<<male<<cout<<" Females = "<<cout<<female<<cout<<" \n Total = "<<cout<<total;
    return 0;
}