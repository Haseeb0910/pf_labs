#include<iostream>
#include<array>
using namespace std;
bool isZero(array<array<int,2>,2>a)
{
  bool check=true;
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      if(a[i][j]!=a[j][i])
      {
        check=false;
        return check;
      }
    }
  }
  return check;
}
int main()
{
  int n;
  bool check;
  array<array<int,2>,2>a;
  for(int i=0;i<2;i++)
  {
    cout<<"Enter "<<i+1<<" row : ";
    for(int j=0;j<2;j++)
    {
      cin>>a[i][j];
    }
  }
  check=isZero(a);
  if(check==true)
  {
    cout<<"determinant is zero";
  }
  else
  {
    cout<<"determinant is not zero";
  }
}
