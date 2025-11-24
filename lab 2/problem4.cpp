#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  if(n>1000)
  {
    cout<<"BIG NUMBER";
  }
  if(n<1000)
  {
    cout<<"SMALL NUMBER";
  }
}