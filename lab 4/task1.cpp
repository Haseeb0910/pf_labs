#include<iostream>
using namespace std;
string abvalue(int a , int b , int c);
int main()
{
  int a,b,c;
  cout<<"Enter three numbers : ";
  cin>>a>>b>>c;
  cout<<abvalue(a,b,c);
}
string abvalue( int a , int b , int c)
{
  unsigned int diff = a-b;
  unsigned cc = c;
  if(diff>cc)
  return "Waoo";
  else
  return "Ohhh";
}