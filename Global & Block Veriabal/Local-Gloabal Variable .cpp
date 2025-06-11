/* Write a Program to using Local-global Variable */
#include<iostream>
using namespace std;
int g = 20 ;         // Global Variable Declaration and initialization
{
    int g = 10;   //Local Variable Declaration and initialization
    cout<<g;
    return 0;
}