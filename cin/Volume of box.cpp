/* Write a Program to Calculate volume of box */
 #include<iostream>
 using namespace std;
 int main()
 {
     int l, h, w;
     float volume_box;
     cout<<"Enter the length,height and width : ";
     cin>>l>>h>>w;
     volume_box  = l * h * w;
     cout<<"Volume of Box = "<<volume_box;
     return 0;
 }
