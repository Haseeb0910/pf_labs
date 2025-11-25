#include<iostream>
using namespace std;
int main()
{
  int n,x,max=0,i=1;
  cout<<"enter amount of number you want to enter : ";
  cin>>n;
  cout<<"enter numbers : ";
  while(i<=n)
  {
    cin>>x;
    if(x>max)
    max=x;
    i++;
  }
  cout<<"max numbers is :"<<max;
}  