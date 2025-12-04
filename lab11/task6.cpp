#include<iostream>
#include<array>
using namespace std;
array<array<int,3>,3> scalar(array<array<int,3>,3>arr,int n)
{
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      arr[i][j]=n*arr[i][j];
    }
  }
  return arr;
}
int main()
{
  int n;
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
  cout<<"Enter an integer : ";
  cin>>n;
  b=scalar(a,n);
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<b[i][j]<<" ";
    }
    cout<<endl;
  }
}