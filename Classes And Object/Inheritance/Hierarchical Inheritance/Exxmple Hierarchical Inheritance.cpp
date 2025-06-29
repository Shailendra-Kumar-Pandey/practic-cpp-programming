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