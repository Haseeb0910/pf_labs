#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int length(string a);
int main()
{
  string a;
  int len;
  cout<<"Enter a string : ";
  getline(cin,a);
  len = length(a);
  cout<<len;
  
}
int length(string a)
{
  int n=0;
  int count=0;
  while(a[n]!='\0')
  {
    count++;
    n++;
  }
  return count;
}