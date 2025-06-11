/* Write a Program to using Local-global Variable */
#include<iostream>
using namespace std;
int g = 20 ;         // Global Variable Declaration and initialization
int main()
{
    int g = 10;   //Local Variable Declaration and initialization
    cout<<"G = "<<g;
    return 0;
}
/* If Local & global Variable same name then local variable get 1st Prefrence */
