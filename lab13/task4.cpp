#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
  float a,b;
  cout<<"Enter two numbers : ";
  cin>>a>>b;
  float *i=&a;
  float *j=&b;
  if(*i>*j)
  {
    cout<<*i<<" is greater ";
  }
  else
  {
    cout<<*j<<" is greater ";
  }
}