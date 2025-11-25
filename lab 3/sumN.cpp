#include<iostream>
using namespace std;
int main()
{
  int s,e,res = 0;
  cout<<"enter the starting number : ";
  cin>>s;
  cout<<"enter the ending number : ";
  cin>>e;
  while(s<=e)
  {
    res=res+s;
    s++;
  }
  cout<<"sum of numbers in given age is : "<<res;
}