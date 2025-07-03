/* Write a Program to demonstrate hierarchical inheritance to get squar, cube and factorial of a number. Base class should have folloing info, Number and member function to accept number. Derived class 1 should find square. Derived class 2 should find cube, derived class 3 shuld find factorial. */
#include <iostream>
using namespace std;
class Number {
protected:
    int num;
public:
    void acceptNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }
    int getNumber(){
        return num;
    }
};
class Square : public Number {
public:
    int calculateSquare() {
        return num * num;
    }
};
class Cube : public Number {
public:
    int calculateCube() {
        return num * num * num;
    }
};
class Factorial : public Number {
public:
    int calculateFactorial() {
        int fact = 1;
        for (int i = 1; i <= num; ++i) {
            fact *= i;
        }
        return fact;
    }
};
int main() {
    Square squareObj;
    Cube cubeObj;
    Factorial factorialObj;

    // Accept number
    squareObj.acceptNumber();
    cubeObj.acceptNumber();
    factorialObj.acceptNumber();

    // Calculate and display results
    cout << "Square of " << squareObj.getNumber() << " is: " << squareObj.calculateSquare() << endl;
    cout << "Cube of " << cubeObj.getNumber() << " is: " << cubeObj.calculateCube() << endl;
    cout << "Factorial of " << factorialObj.getNumber() << " is: " << factorialObj.calculateFactorial() << endl;

    return 0;
}
