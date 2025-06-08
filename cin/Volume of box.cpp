/* Write a Program to Calculate valume of box */
 #include<iostream>
 using namespace std;
 int main()
 {
     int l, h, w;
     float volume_box;
     cout<<"Enter the lenght,height and wedth : ";
     cin>>l>>h>>w;
     volume_box  = l * h * w;
     cout<<"Volume of Box = "<<volume_box;
     return 0;
 }