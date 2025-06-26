/* Write a program to Class In-line Function */
#include<iostream>
using namespace std;
inline int Add(int a, int b) { // In-line function definition
    // This function returns the maximum of two integers
    return a + b;
}
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Sum of " << x << " and " << y << " is: " << Add(x, y) << endl;
    cout << "Add(20, 10): " << Add(20, 10) << endl;
    cout << "Add(40, 30): " << Add(40, 30) << endl;
    cout << "Add(0, 50): " << Add(0, 50) << endl;
    return 0;
}
// This program demonstrates the use of an in-line function to calculate the sum of two integers.
// The in-line function `Add` is defined to return the sum of its two parameters.
// The main function prompts the user for two integers, calculates their sum using the in-line function,
// and prints the result. It also demonstrates the in-line function with some hardcoded values.
// The use of in-line functions can help reduce function call overhead, especially for small functions like this one.
// In-line functions are typically used for small, frequently called functions to improve performance.
// Note: In-line functions are a suggestion to the compiler, and it may choose not to in-line
// the function if it deems it inappropriate (e.g., if the function is too complex).
// In-line functions can improve performance by reducing the overhead of function calls,
// especially for small functions that are called frequently.
// However, excessive use of in-line functions can lead to code bloat, so they should be used judiciously.
