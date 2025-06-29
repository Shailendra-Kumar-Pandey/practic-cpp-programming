/* Write a Program to class - Overriding Inheritance */
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
    return 0;
}
//output-
// Derived Function
// This code demonstrates method overriding in inheritance. The `Derived` class overrides the `print`
// method of the `Base` class. When `derived1.print()` is called, it invokes the overridden method in the `Derived` class, producing the output "Derived Function". This illustrates how derived classes can provide specific implementations of methods defined in base classes.
// The `Base` class has a method `print` that outputs "Base Function", while    the `Derived` class has its own implementation of `print` that outputs "Derived Function". When an object of the `Derived` class is created and its `print` method is called, the overridden version in the `Derived` class is executed, demonstrating method overriding in inheritance. This allows for polymorphic behavior where the derived class can provide a specific implementation of a method that is already defined in its base class, enabling more flexible and reusable code structures.
// The `Base` class has a method `print` that outputs "Base Function", while    the `Derived` class has its own implementation of `print` that outputs "Derived Function". When an object of the `Derived` class is created and its `print` method is called, the overridden version in the `Derived` class is executed, demonstrating method overriding in inheritance. This allows for polymorphic behavior where the derived class can provide a specific implementation of a method that is already defined in its base class, enabling more flexible and reusable code structures.
// The `Base` class has a method `print` that outputs "Base Function", while