#include<iostream>
#include<array>
using namespace std;
array<array<int,3>,3> transpose(array<array<int,3>,3> arr)
{
  array<array<int,3>,3> arr2;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      arr2[i][j]=arr[j][i];
    }
  }
  return arr2;
}
bool symmetric(array<array<int,3>,3>a,array<array<int,3>,3>b)
{
  bool check=true;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      if(a[i][j]!=b[i][j])
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
  array<array<int,3>,3>a;
  array<array<int,3>,3>b;
  for(int i=0;i<3;i++)
  {
    cout<<"Enter "<<i+1<<" row : ";
    for(int j=0;j<3;j++)
    {
      cin>>a[i][j];
    }
  }
  b=transpose(a);
  bool check=symmetric(a,b);
  if(check==true)
  {
    cout<<"SYMMETRIC";
  }
  else
  {
    cout<<"NOT SYMMETRIC";
  }
}