/* Write a Program to File - Create and Write mode data create and insert data */
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char data[100];
    ofstream createFile;  // Create an object of ofstream class
    createFile.open("fileCreate.dat");  // Open a file in write mode
    
    cout << "\nEnter the details..." << endl;
    cout << "\nEnter your name: ";
    cin.getline(data, 100);  // Read a line of text from the user
    createFile << data << endl;  // Write the name to the file

    cout << "\nEnter your age: ";
    cin >> data;  // Read age as a string
    cin.ignore();  // To ignore the newline character left in the buffer
    createFile << data << endl;  // Write the age to the file

    cout << "\nEnter your city: ";
    cin.getline(data, 100);  // Read city name
    createFile << data << endl;  // Write the city to the file

    cout << "\nEnter your Moble Number: ";
    cin >> data;  // Read mobile number as a string
    cin.ignore();  // To ignore the newline character left in the buffer
    createFile << data << endl;  // Write the mobile number to the file

    createFile.close();  // Close the file
    
    return 0;
}