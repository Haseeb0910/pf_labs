#include<iostream>
using namespace std;
const float PI=3.14;
int main()
{
  int radius;
  float area;
  cout<<"Enter radius of circle : ";
  cin>>radius;
  area=PI*radius*radius;
  cout<<"The area of circle is : "<<area;
}