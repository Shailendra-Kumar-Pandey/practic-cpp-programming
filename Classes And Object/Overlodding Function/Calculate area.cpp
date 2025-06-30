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
    float area(float r) // Area of Circle
    {
        return 3.14 * r * r;
    }
    float area(float l, float b) // Area of Rectangle
    {
        return l * b;
    }
    float area(int b, int h) // Area of Triangle
    {
        return 0.5 * b * h;
    }
    float area(int s) // Area of Square
    {
        return s * s;
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
                cout << "\nEnter radius of Circle: ";
                cin >> radius;
                cout << "\nArea of Circle: " << a.area(radius) << endl;
            }
            break;
        case 2:
            {
                float length, breadth;
                cout << "\nEnter length and breadth of Rectangle: ";
                cin >> length >> breadth;
                cout << "\nArea of Rectangle: " << a.area(length, breadth) << endl;
            }
            break;
        case 3:
            {
                float base, height;
                cout << "\nEnter base and height of Triangle: ";
                cin >> base >> height;
                cout << "\nArea of Triangle: " << a.area(base, height) << endl;
            }
            break;
        case 4:
            {
                int side;
                cout << "\nEnter side of Square: ";
                cin >> side;
                cout << "\nArea of Square: " << a.area(side) << endl;
            }
            break;
        case 5:
            cout << "\nExiting the program." << endl;
        default:
            if (choice < 1 || choice > 5)
            {
                cout << "\nInvalid choice! Please enter a number between 1 and 5.\n" << endl;
            }
            break;
        }
    }while (choice != 5);
    cout << "\nThank you for using the area calculator!\n" << endl;
    // Return 0 to indicate successful execution
    return 0;
}
