#include<iostream>
#include<cmath>
using namespace std;
float a(float x);
int main()
{
  float n;
  cout<<"Enter the number : ";
  cin>>n;
  cout<<"square root of the given number is : ";
  cout<<a(n);
}
float a(float x)
{
  float a;
  float i=0.01;
  while(i<=x)
  {
    if(i*i<=x)
    {
      a=i;
    }
    i=i+0.01;
  }
  return a;
  
}
