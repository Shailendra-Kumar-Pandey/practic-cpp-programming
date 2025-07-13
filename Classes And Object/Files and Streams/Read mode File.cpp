/* Write a Program to File Read the file Content */
#include<iostream>
#include<fstram>
using namespace std;
int main()
{
    ifstream data;
    data.open("fileCreate.dat");
    if (!data) {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    string line;
    while (getline(data, line)) {
        cout << line << endl;
    }
    data.close();
    
    return 0;
}