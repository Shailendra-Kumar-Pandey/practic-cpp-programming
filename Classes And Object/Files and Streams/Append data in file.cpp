/* Write a Program to File and exiest file to append */

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream obj;       // Create an object of of stream class
    obj.open("fileCreate.dat", ios::app);  // Open a file in append mode
    if(!obj){
        cerr << "Error opening file for appending!" << endl;  // Output error message if file cannot be opened
        return 1;
    }
    cout << "Enter data to append to the file (type 'exit' to stop):" << endl;
    string data;
    while (true) {
        getline(cin, data);  // Read a line of text from the user
        if (data == "exit") {  // Check for exit condition
            break;  // Exit the loop if user types 'exit'
        }
        obj << data << endl;  // Write the data to the file
    }
    obj.close();  // Close the file
    return 0;
}
