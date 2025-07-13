/* Write a Program to File Read the file Content */
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream data;
    data.open("fileCreate.dat");
    if (!data) {        // Check if the file opened successfully
        cerr << "Error opening file!" << endl;  // Output error message if file cannot be opened
        cerr << "Please ensure the file exists and is accessible." << endl;
        return 1;
    }
    string line;
    while (getline(data, line)) {       // Read each line from the file
        cout << line << endl;           // Output the line to the console
    }
    data.close();

    return 0;
}