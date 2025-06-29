/* Write a Program to class Overriding Inheritance */
#include <iostream>
using namespace std;
class Base {
public:
    void print() {
        cout << "Base Function" << endl;
    }
};
class Derived : public Base {
public:
    void print() {
        cout << "Derived Function" << endl;
    }
};
int main(){
    Derived derived1;
    derived1.print(); // Calls the Derived class print function
    
    //poiner of Base type that points to derived1
    Base*ptr = &derived1;
    // call Function of Base class using ptr
    ptr->print(); // Calls the Base class print function
    return 0;
}