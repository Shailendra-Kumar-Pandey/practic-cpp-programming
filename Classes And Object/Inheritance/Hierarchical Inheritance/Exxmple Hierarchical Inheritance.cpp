/* Write a Program to class - Hierarchical Inheritance */
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
// Derived class 3
class Cow : public Animal {
    public:
        void moo() {
            cout << "Mooing..." << endl;
        }
};
int main() {
    Dog dog;
    Cat cat;
    Cow cow;

    dog.eat();  // From base class Animal
    dog.bark(); // From derived class Dog

    cat.eat();  // From base class Animal
    cat.meow(); // From derived class Cat

    cow.eat();  // From base class
    cow.moo();  // From derived class Cow
    return 0;
}
// Output:  
// Eating...
// Barking...
// Eating...
// Meowing...
// Eating...
// Mooing...
// Explanation:
// In this example, we have a hierarchical inheritance structure where `Dog`, `Cat`, and `Cow` are derived classes that inherit from the base class `Animal`. Each derived class can access the methods of the base class while also defining its own specific methods.
// The `Dog` class has a method `bark`, the `Cat` class has a method `meow`, and the `Cow` class has a method `moo`. In the `main` function, we create instances of each derived class and call their respective methods.
// This demonstrates how hierarchical inheritance allows multiple derived classes to share the same base class functionality while also providing their own unique behaviors. Each derived class can utilize the methods from the base class, promoting code reuse and organization in the program.
// The program showcases the concept of hierarchical inheritance in C++, where multiple classes can inherit from a single base class. This structure allows for a clear organization of related classes, enabling them to share common functionality while also implementing their own specific behaviors. The `Animal` class serves as the foundation, providing shared methods like `eat`, while each derived class (`Dog`, `Cat`, and `Cow`) adds its own unique methods (`bark`, `meow`, and `moo`, respectively). This approach enhances code maintainability and readability, making it easier to manage and extend the program in the future.
// The output demonstrates the sequence of method calls, showing how each derived class can access the base class methods and its own methods. This is a fundamental concept in object-oriented programming, allowing for more complex and feature-rich applications by building on existing code structures.
// The program is a simple yet effective demonstration of hierarchical inheritance in C++, showcasing how classes can be organized in a hierarchy to share functionality and promote code reuse. Each derived class can access the methods of the base class while also implementing its own specific behaviors, illustrating the power of inheritance in object-oriented programming. This example can be extended further by adding more derived classes or by implementing additional methods, allowing for a more complex and feature-rich application structure.
// The program demonstrates the concept of hierarchical inheritance in C++ by creating a hierarchy of classes that
// build upon a common base class. The `Animal` class serves as the base class, providing shared functionality such as the `eat` method. The derived classes `Dog`, `Cat`, and `Cow` inherit from `Animal` and add their own specific behaviors (`bark`, `meow`, and `moo`, respectively). This structure promotes code reuse and organization, making it easier to manage and extend the program in the future.
// Each derived class can utilize the methods from the base class while also defining its own unique methods