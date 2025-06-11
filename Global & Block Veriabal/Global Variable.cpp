/* Write a Program to using global Variable */
#include<iostream>
using namespace std;
int g ;
int main()
{
    int a = 20, b = 10;
    g = a + b;
    cout<<"Global Variable Sum = "<<g;
    return 0;
}