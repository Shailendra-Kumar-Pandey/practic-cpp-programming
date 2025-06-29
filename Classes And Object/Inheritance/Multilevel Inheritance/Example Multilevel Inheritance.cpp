/* Write a Program to Class - Multilevel Inheritance */
#include <iostream>
using namespace std;
// Base class
class Animal {
    public:
        void eat() {
            cout << "Eating..." << endl;
        }
};
// Intermediate class
class Mammal : public Animal {
    public:
        void walk() {
            cout << "Walking..." << endl;
        }
};
// Derived class
class Dog : public Mammal {
    public:
        void bark() {
            cout << "Barking..." << endl;
        }
};
int main() {
    Dog dog;
    dog.eat();   // From base class Animal
    dog.walk();  // From intermediate class Mammal
    dog.bark();  // From derived class Dog
    
    return 0;
}
// Output:
// Eating...
// Walking...
// Barking...
// Explanation:
// In this example, we have a multilevel inheritance structure where `Dog` inherits from `Mammal`, which in turn inherits from `Animal`. The `Dog` class can access methods from both the `Mammal` and `Animal` classes, demonstrating the concept of multilevel inheritance in C++. Each class adds its own functionality while still being able to use the methods of its parent classes.
// This allows for a clear hierarchy and reuse of code, making the program more organized and maintainable.
// The `Dog` class can call the `eat` method from `Animal`, the `walk` method from `Mammal`, and its own `bark` method, showcasing how multilevel inheritance works in C++.
// The program demonstrates the concept of multilevel inheritance in C++ by creating a hierarchy of classes that build upon each other. The `Dog` class inherits functionality from both the `Mammal` and `Animal` classes, allowing it to use methods defined in both parent classes. This structure promotes code reuse and organization, making it easier to manage and extend the program in the future. Each class can focus on its specific behavior while still being part of a larger hierarchy.
// The output shows the sequence of method calls, demonstrating how the `Dog` class can utilize
// the methods from its parent classes. This is a fundamental concept in object-oriented programming, allowing for more complex and feature-rich applications by building on existing code structures.
// The program is a simple yet effective demonstration of multilevel inheritance in C++, showcasing how classes
// can be organized in a hierarchy to share functionality and promote code reuse. The `Dog` class, as the most derived class, can access
// methods from both its immediate parent class `Mammal` and the grandparent class `Animal`, illustrating the power of inheritance in object-oriented programming.
// This example can be extended further by adding more classes to the hierarchy or by implementing additional methods