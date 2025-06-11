/* Write a Program to using global Variable */
#include<iostream>
using namespace std;
int g ;         // Global Variable Declaration
int main()
{
    int a = 20, b = 10;   //Local Variable Declaration and initialization
    g = a + b;          // Global Variable Access
    cout<<"Global Variable Sum = "<<g;
    return 0;
}
