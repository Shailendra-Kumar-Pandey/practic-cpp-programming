/* Write a program to class - Overloadding Function */
#include<iostream>
using namespace std;
class PrintData         // Create class and member function , initilize and Defination
{
    public:
        void print(int i){
            cout<<"\n Printing Int... "<<i<<endl;
        }
        void print(double f){
            cout<<"\n Printing Float... "<<f<<endl;
        }
        void print(char *c){
            cout<<"\n Printing Charecter... "<<c<<endl;
        }
};
int main()
{
    PrintData pd;       // Create Object
    pd.print("Shailendra Kumar Pandey");        // Calling function
    pd.print(12);
    pd.print(9.01);
    return 0;
}