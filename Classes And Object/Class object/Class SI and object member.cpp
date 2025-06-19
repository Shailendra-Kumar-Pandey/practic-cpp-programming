/* Write a program to calculate and print Simple Interest and find to member simple Interest */
#include<iostream>
using namespace std;
class SI
{ public:
    double principal;
    double rate;
    double time;
};
int main()
{
    SI jeetu;
    SI gayatri;
    double simple_interest = 0.0;
    jeetu.principal = 4000;
    jeetu.rate = 5;
    jeetu.time = 3;
    gayatri.principal = 9000;
    gayatri.rate = 15;
    gayatri.time = 7;
    simple_interest = (jeetu.principal * jeetu.rate * jeetu.time)/100;
    cout<<"Jeetu Simple Interest = "<<simple_interest<<endl;
    simple_interest = (gayatri.principal * gayatri.rate * gayatri.time)/100;
    cout<<"Gayatri Simple Interest = "<<simple_interest<<endl;
    return 0;
}