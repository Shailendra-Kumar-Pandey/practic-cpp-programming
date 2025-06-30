/* Write a Program to Class and Overloading function in Simple Interest */
#include<iostream>
using namespace std;
class SimpleInterest
{
    //int rate;
    public:
        int Simple_Interest(int p, int t, int r){
            return (p*t*r)/100;
        }
       // void setRate(int r){
       //     rate = r;
       // }
        int Simple_Interest(int p, int t){
            return (p*t)/100;
        }
};
int main()
{
    SimpleInterest si;
   // si.setRate(5);
    si.Simple_Interest(5000,12,7);
    si.Simple_Interest(10000,5);
    return 0;
}
