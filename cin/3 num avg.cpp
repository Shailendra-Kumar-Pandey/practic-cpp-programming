/* Write a Program to Average 3 Numbers */
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    float avg;
    cout<<"Enter the Three Numbers : ";
    cin>>a>>b>>c;
    avg = (a + b + c)/3.0;
    cout<<"Average is = "<<avg;
    return 0;
}
