#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int length(string a);
void reverse(string a,int len);
int main()
{
  string a;
  int len;
  cout<<"Enter a string : ";
  getline(cin,a);
  len = length(a);
  reverse(a,len);
  
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
void reverse(string a,int len)
{
  for(int i=len;i>=0;i--)
  {
    cout<<a[i];
  }
}
