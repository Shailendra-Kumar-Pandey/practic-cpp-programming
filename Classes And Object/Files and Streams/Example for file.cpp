/* Write a Program to class - Files and Streams */
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char data[100];

    ofstream obj;       // Create an object of of stream class
    obj.open("data.dat");  // Open a file in write mode

    cout<<"\nEnter the details..."<<endl;
    cout<<"\nEnter your name: ";
    cin.getline(data, 100);     // Read a line of text from the user
    obj<<data<<endl;        // Write the name to the file

    cout<<"\n Enter your age: ";
    cin>>data;      // Read age as a string
    cin.ignore();   // To ignore the newline character left in the buffer
    obj<<data<<endl;        // Write the age to the file

    obj.close();        // Close the file

    // Now, read the data back from the file
    ifstream obj1;
    obj1.open("data.dat");  // Open the file in read mode

    obj1>>data;  // Read the name from the file
    cout<<data<<endl;

    obj1>>data;  // Read the name from the file
    cout<<data<<endl;

    obj1>>data;  // Read the name from the file
    cout<<data<<endl;

    obj1.close();  // Close the file
    return 0;
}
