#include<iostream>
#include<array>
using namespace std;
int main()
{
  array<char,20>a;
  int alpha=0,number=0,special=0;
  cout<<"Enter 20 characters (numbers , alphabets , special signs)";
  int i=0;
  while(i<20)
  {
    cin>>a[i];
    if(a[i]>='A' && a[i]<='z') 
    {
      alpha++;
    }
    else if(a[i]>='0' && a[i]<='9')
    {
      number++;
    }
    else
    {
      special++;
    }
    i++;
  }
  cout<<"Alphabets : "<<alpha<<endl;
  cout<<"Numbers : "<<number<<endl;
  cout<<"Special characters : "<<special;
}