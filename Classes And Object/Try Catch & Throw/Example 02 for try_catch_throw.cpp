/* Write a program to using try and catch and throw */
#include <iostream>
#include <exception>
using namespace std;
double division(int a, int b)
{
    return (a / b);
}
int main()
{
    int x = 50;
    int y = 0;
    double z = 0;
        z = division(x, y);
        cout << z << endl;
    return 0;
}
