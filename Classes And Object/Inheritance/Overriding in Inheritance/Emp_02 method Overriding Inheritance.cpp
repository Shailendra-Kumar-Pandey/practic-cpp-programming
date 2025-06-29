/* Write a Program to method 02 Class - Overriding Inheritance */
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
    Derived derived1, derived2;
    derived1.print(); // Calls the Derived class print function
    // Access print() Function of the Base Class {scope resolution operator}
    derived2.Base::print(); // Calls the Base class print function
    return 0;
}