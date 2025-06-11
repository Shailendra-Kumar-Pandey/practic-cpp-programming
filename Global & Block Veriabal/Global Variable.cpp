/* Write a Program to using global Variable */
#include<iostream>
using namespace std;
int g ;         // Global Variable Inisilize
int main()
{
    int a = 20, b = 10;
    g = a + b;          // Global Variable Access
    cout<<"Global Variable Sum = "<<g;
    return 0;
}
