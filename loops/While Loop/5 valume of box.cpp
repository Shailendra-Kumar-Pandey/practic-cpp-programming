/* Write a Program to calculate and print volume of 5 box */
#include<iostream>
using namespace std;
int main()
{
    int i = 0, w, l, h, volume_box;
    while(i < 5)
    {
        cout<<"Enter the Width, length and height : ";
        cin>>w>>l>>h;
        volume_box = w * l * h;
        cout<<"Volume of Box : "<<volume_box<<endl;
        i = i + 1;
    }
    return 0;
}
