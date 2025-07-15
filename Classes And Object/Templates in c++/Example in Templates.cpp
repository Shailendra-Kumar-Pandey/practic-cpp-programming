/* Write a Program to using Templates Container { Variables } */
#include <iostream>
#include <string>
using namespace std;
template <typename T>       // Template function to find maximum of two values 
inline T const &Max(T const &a, T const &b)     // This function returns the maximum of two values
{
    return a < b ? b : a;   // If a is less than b, return b; otherwise return a
}
int main ()
{
    int i = 35;
    int j = 20;
    cout << "Max(i,j) : " << Max(i,j) << endl;  // Output: Max(i,j) : 35

    double f1 = 13.5;
    double f2 = 20.7;
    cout << "Max(f1,f2) : " << Max(f1,f2) <<endl;   // Output: Max(f1,f2) : 20.7

    string s1 = "Hello";    // String comparison using templates
    string s2 = "World";    // String comparison using templates
    cout << "Max(s1,s2) : " << Max(s1,s2) << endl;  // Output: Max(s1,s2) : World

    return 0;
}
    // explain this code 
    /* This code defines a function template in C++ that finds the maximum of two values.

Line-by-line explanation
template <typename T>
This tells the compiler that Max is a template function. The type T will be replaced with the actual type (like int, double, etc.) when you call the function.

inline T const &Max(T const &a, T const &b)

inline: Suggests to the compiler to insert the function's code directly at the call site for performance (not guaranteed).
T const &: The function returns a constant reference to the maximum value. This avoids copying large objects.
Max(...): The function name.
T const &a, T const &b: The function takes two constant references of type T as input.
return a < b ? b : a;
This uses the ternary operator:

If a is less than b, return b.
Otherwise, return a.
Usage Example
//          int x = 5, y = 10;
//          int maxVal = Max(x, y); // maxVal will be 10
Gotchas
Reference Return: Returning by reference is efficient, but be careful not to use this with temporary values (like Max(1, 2)), as it would return a reference to a temporary, which is unsafe.
Type Requirements: The type T must support the < operator.
Summary
This template lets you write a single Max function that works for any type supporting <, and efficiently returns the larger value by reference.

 */



 //This code demonstrates the use of a generic Max function, likely implemented as a C++ template, to find the maximum of two values of different types (int, double, string).

/* Step-by-step Explanation
Variable Declarations

int i = 35, j = 20;
Two integers are declared and initialized.
double f1 = 13.5, f2 = 20.7;
Two doubles are declared and initialized.
string s1 = "Hello", s2 = "World";
Two strings are declared and initialized.
Using the Max Function

Max(i, j)
Finds the maximum of two integers (35 and 20). Returns 35.
Max(f1, f2)
Finds the maximum of two doubles (13.5 and 20.7). Returns 20.7.
Max(s1, s2)
Finds the maximum of two strings. In C++, string comparison is lexicographical, so "World" is greater than "Hello".
Output

Each result is printed using cout, showing the maximum value for each pair.
Key Concepts
Function Templates:
The Max function is likely a template, allowing it to work with any type that supports the > operator.
Type Deduction:
The compiler automatically deduces the type based on the arguments passed.
String Comparison:
Strings are compared alphabetically (lexicographically).
Gotchas
//      template <typename T>
//      T Max(T a, T b) {
//          return (a > b) ? a : b;
//      }

The code assumes that Max is defined elsewhere, probably like this:
You must include the necessary headers:
//      #include <iostream>
//      #include <string>
//      using namespace std;
If you forget to include <string> or use using namespace std;, you’ll get compilation errors.
Summary
This code shows how C++ templates enable writing generic functions that work with multiple types, improving code reuse and flexibility.
*/
