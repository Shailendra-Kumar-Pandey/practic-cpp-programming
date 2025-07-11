/* Write a Program to Class - Data Encapsulation */
#include<iostream>
using namespace std;
class Adder     // Base Class
{
    public:
        // Constructor
        Adder(int i =0)
        {
            total = i;  // Initialize total
        }
        // interface to outside world
        void addNum(int number)
        {
            total += number;
        }
        // interface to outside world
        int getTotal()
        {
            return total;
        }
    private:
        // hidden data from outside world
        int total;
};
int main()
{
    Adder a;   // Create an object 
    a.addNum(10);
    a.addNum(20);
    a.addNum(30);

    cout << "Total: " << a.getTotal() << endl;  // Display total
    return 0;
}