/* Write a Program to Swap Values of two variables. Eg. { Swap(int, int) swap(double, double)} */
#include<iostream>
using namespace std;
class Swap{
    public:
    // Function to swap two integers
        void swap(int a, int b){
                int temp = a;
                a = b;
                b = temp;
                cout <<a<< " "<<b<< endl;
        }
    // Overloaded function to swap two doubles
        void swap(double a, double b){
                int temp = a;
                a = b;
                b = temp;
                cout <<a<< " "<<b<< endl;
        }
};
int main()
{
    Swap s;
    s.swap(10, 20); // Swapping integers
    s.swap(10.5, 20.5); // Swapping doubles
    return 0;
}