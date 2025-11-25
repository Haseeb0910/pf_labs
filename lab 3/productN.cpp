#include<iostream>
using namespace std;
int main()
{
  int s,e,res=1;
  cout<<"enter starting value : ";
  cin>>s;
  cout<<"enter ending value : ";
  cin>>e;
  while(s<=e)
  {
    res = res*s;
    s++;
  }
  cout<<"product of values in give range is : "<<res;
}