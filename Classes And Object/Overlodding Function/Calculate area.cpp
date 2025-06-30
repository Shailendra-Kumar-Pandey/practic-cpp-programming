/* Write a menu driven program to calculate and print areas as follows. Consider overloading function as area().

To Calculate Area Menu
1) Area of Circle
2) Area of Rectangle
3) Area of Triangle
4) Area of Square
5) Exit
Enter your choice (1-5): 
*/
#include<iostream>
using namespace std;
class Area
{
    public:
    float area(float radius) // Area of Circle
    {
        return 3.14 * radius * radius;
    }
    float area(float length, float breadth) // Area of Rectangle
    {
        return length * breadth;
    }
    float area(float base, float height) // Area of Triangle
    {
        return 0.5 * base * height;
    }
    float area(int side) // Area of Square
    {
        return side * side;
    }
};
int main()
{
    Area a;
    int choice;
    do
    {
        cout << " To Calculate Area Menu\n";
        cout << "1) Area of Circle\n";
        cout << "2) Area of Rectangle\n";
        cout << "3) Area of Triangle\n";
        cout << "4) Area of Square\n";
        cout << "5) Exit\n";
        cout << "\nEnter your choice (1-5): ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            {
                float radius;
                cout << "Enter radius of Circle: ";
                cin >> radius;
                cout << "Area of Circle: " << a.area(radius) << endl;
            }
            break;
        case 2:
            {
                float length, breadth;
                cout << "Enter length and breadth of Rectangle: ";
                cin >> length >> breadth;
                cout << "Area of Rectangle: " << a.area(length, breadth) << endl;
            }
            break;
        case 3:
            {
                float base, height;
                cout << "Enter base and height of Triangle: ";
                cin >> base >> height;
                cout << "Area of Triangle: " << a.area(base, height) << endl;
            }
            break;
        case 4:
            {
                int side;
                cout << "Enter side of Square: ";
                cin >> side;
                cout << "Area of Square: " << a.area(side) << endl;
            }
            break;
        case 5:
            cout << "Exiting the program." << endl;
        default:
            if (choice < 1 || choice > 5)
            {
                cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
            }           
            break;
        }
    }while (choice != 5);
    cout << "Thank you for using the area calculator!" << endl;
    // Return 0 to indicate successful execution
    return 0;
}
