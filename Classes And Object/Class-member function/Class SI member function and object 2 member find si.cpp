/* Write a Program to calculate and print Simple Interest find 2 member class */
#include<iostream>
using namespace std;
class SI
{ public:
    double principal;
    double rate;
    double time;
    double getsimple_interest();
    void setprincipal(double p);
    void setrate(double r);
    void settime(double t);
};
double SI::getsimple_interest()
{
    return (principal * rate * time)/100;
}
void SI::setprincipal(double p)
{
    principal = p;
}
void SI::setrate(double r)
{
    rate = r;
}
void SI::settime(double t)
{
    time = t;
}
int main()
{
    SI jeetu;
    SI gayatri;
    double simple_interest = 0.0;
    jeetu.setprincipal(4000);
    jeetu.setrate(5);
    jeetu.settime(3);
    gayatri.setprincipal(9000);
    gayatri.setrate(15);
    gayatri.settime(7);
    simple_interest = jeetu.getsimple_interest();
    cout<<"Jeetu Simple Interest = "<<simple_interest<<endl;
    cout<<"Gayatri Simple Interest = "<<gayatri.getsimple_interest()<<endl;
    return 0;
}
