/* Write a Program to Class - Hybrid Inheritance */
#include <iostream>
using namespace std;
// Base class
class Animal {
    public:
        void eat() {
            cout << "Eating..." << endl;
        }
};
// Derived class 1
class Dog : public Animal {
    public:
        void bark() {
            cout << "Barking..." << endl;
        }
};
// Derived class 2
class Cat : public Animal {
    public:
        void meow() {
            cout << "Meowing..." << endl;
        }
};
// Hybrid class inheriting from both Dog and Cat
class Hybrid : public Dog, public Cat {
    public:
        void hybridSound() {
            cout << "Hybrid sound: Woof Meow!" << endl;
        }
};
int main() {
    Hybrid hybrid;
    hybrid.eat();        // From Animal
    hybrid.bark();      // From Dog
    hybrid.meow();      // From Cat
    hybrid.hybridSound(); // From Hybrid

    return 0;
}
// Output:
// Eating...    
// Barking...
// Meowing...
// Hybrid sound: Woof Meow!
// Explanation:
// In this example, we have a base class `Animal` with a method `eat()`.
// The `Dog` and `Cat` classes inherit from `Animal` and have their own
// specific methods `bark()` and `meow()`, respectively.
// The `Hybrid` class inherits from both `Dog` and `Cat`, allowing it to
// access methods from both classes. The `hybridSound()` method in the
// `Hybrid` class demonstrates the combined functionality of both
// derived classes. When we create an instance of `Hybrid`, we can call
// methods from all three classes, showcasing the concept of hybrid inheritance.
// This example illustrates how hybrid inheritance allows a class to
// inherit features from multiple classes, enabling a flexible and
// reusable design in C++.
// Note: Hybrid inheritance can lead to complexities such as the diamond problem,
// where a class inherits from two classes that share a common base class.
// In this example, we avoid that issue by not having a common base class
// between `Dog` and `Cat`. However, in more complex scenarios, careful design
// and the use of virtual inheritance may be necessary to resolve ambiguities.
// Always ensure that the design of hybrid inheritance is clear and
// maintainable to avoid confusion and potential issues in larger codebases.
// This example is a simple demonstration of hybrid inheritance in C++.
// It is important to understand the implications of using hybrid inheritance
// in larger applications, especially regarding code maintainability and
// potential ambiguities that can arise from multiple inheritance.
// When using hybrid inheritance, it is crucial to document the relationships
// between classes clearly and to ensure that the design remains intuitive. 