#include<iostream>
#include<cmath>
using namespace std;
float angle(float x);
int main()
{
  float x;
  cout<<"enter an angle in degree : ";
  cin>>x;
  cout<<angle(x);
}
float angle(float x)
{
  float res = x*(3.14/180);
  return res;
}
