/* Write a Program to Class and Overloading function in Simple Interest */
#include<iostream>
using namespace std;
class SimpleInterest
{
    int rate = 5;
    public:
        double Simple_Interest(int p, int t, int r){
            return (p*t*r)/100;
        }
        double Simple_Interest(int p, int t){
            return (p*t*rate)/100;
        } 
};
int main()
{
    SimpleInterest si;
    
    si.Simple_Interest(5000,12,7);
    si.Simple_Interest(10000,5);
    return 0;
}