/* Write a Program to using try, catch & throw keyword and in this program */
#include <iostream>
using namespace std;
double division(int a, int b)
{
    if( b == 0)
    {
        throw "Division by Zero conditional";
    }
    return (a/b);
}
int main()
{
    int x = 50;
    int y = 0;
    double z = 0;

    try{
        z = division(x,y);
        cout<<z<<endl;
    }catch(const char *msg){
        cerr << msg << endl;
    }
    return 0;
}
