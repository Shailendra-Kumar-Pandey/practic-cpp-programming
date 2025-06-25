/* Write a Program to Class - Inline Function */
#include<iostream>
using namespace std;
inline int Max(int a, int b) { //Inline function definition
    // This function returns the maximum of two integers
    return (a > b) ? a : b;
}
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Maximum of " << x << " and " << y << " is: " << Max(x, y) << endl;
    cout<<"Max(20,10): " << Max(20, 10) << endl;
    cout<<"Max(40,30): " << Max(40, 30) << endl;
    cout<<"Max(0,50): " << Max(0, 50) << endl;
    return 0;
}