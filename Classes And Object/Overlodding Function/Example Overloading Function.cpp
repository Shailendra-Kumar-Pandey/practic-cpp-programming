/* Write a program to class - Overloading Function */
#include<iostream>
using namespace std;
class PrintData         // Create class and member function , initialize and Definition
{
    public:
        void print(int i){
            cout<<"\n Printing Int... "<<i<<endl;
        }
        void print(double f){
            cout<<"\n Printing Float... "<<f<<endl;
        }
        void print(char *c){
            cout<<"\n Printing Character... "<<c<<endl;
        }
        PrintData();        // Constructor Create
        ~PrintData();       // Destructor Create
};
PrintData::PrintData(){             //Constructor Definition
     cout<<"\n Object is Being Create..."<<endl;
}
PrintData::~PrintData(){            //Destructor Definition
    cout<<"\n Object is Being Deleted..."<<endl;
}
int main()
{
    PrintData pd;       // Create Object
    pd.print("Shailendra Kumar Pandey");        // Calling function
    pd.print(12);
    pd.print(9.01);
    return 0;
}
