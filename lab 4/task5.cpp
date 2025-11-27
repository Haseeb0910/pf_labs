#include<iostream>
using namespace std;
bool ispfsquare(int x);
int main()
{
  int n;
  bool res;
  cout<<"enter a number : ";
  cin>>n ;
  res =ispfsquare(n);
  if(res==0)
  cout<<"false";
  else
  cout<<"true";

}
bool ispfsquare(int x)
{
  int i=1;
  bool res=false;
  while(i<x)
  {
   if(i*i==x)
     {
     res=true;
     return res ;
     }
  i++;
 }
return res ;
}
