#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int length(string a);
bool reverse(string a,int len);
int main()
{
  string a,rev;
  int len;
  cout<<"Enter a string : ";
  getline(cin,a);
  len = length(a);
  bool check = reverse(a,len);
  if(check==true)
  {
    cout<<"True";
  }
  else if(check==false)
  {
    cout<<"false";
  }
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
bool reverse(string a,int len)
{
  bool check=true;
  for(int i=0;i<=len;i++)
  {
    if(a[i]!=a[len-1])
    {
      return false;
    }
    len--;
  }
  return true;
}
  
