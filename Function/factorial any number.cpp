/* Write a Program to calculate and print factorial any number */
#include<iostream>
using namespace std;
float factorial(float);
int main()
{
    float n, fact;
    cout<<"Please enter find the number factorial : ";
    cin>>n;
    fact = factorial(n);
    cout<<n<<" is Factorial "<<fact;
    return 0;
}
float factorial(float x)
{
    int f = 1;
    while(x>0)
        f = f * x--;
    return f;
}
