/* Write a Program to calculate and print Volume of 5 box */
#include<iostream>
using namespace std;
int volume_box(int, int, int);
int main()
{
    int i =0, w, l, h, volume;
    while(i < 5)
    {
        cout<<"Enter the box width, length and height : ";
        cin>>w>>l>>h;
        volume = volume_box(w, l, h);
        cout<<"Volume of Box = "<<volume<<endl;
        i = i + 1;
    }
    return 0;
}
int volume_box(int x, int y, int z )
{
    int box;
    box = x * y * z;
    return box;
}
