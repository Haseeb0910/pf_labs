#include<iostream>
#include<array>
using namespace std;
array<array<int,3>,3> sum(array<array<int,3>,3>arr1,array<array<int,3>,3>arr2)
{
   for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      arr2[i][j]=arr1[i][j]+arr2[i][j];
    }
  }
  return arr2;
}
int main()
{
  array<array<int,3>,3>a;
  array<array<int,3>,3>b;
  array<array<int,3>,3>c;
  cout<<"Enter 1 array : "<<endl;
  for(int i=0;i<3;i++)
  {
    cout<<"Enter "<<i+1<<" row : ";
    for(int j=0;j<3;j++)
    {
      cin>>a[i][j];
    }
  }
  cout<<"Enter second array : ";
  for(int i=0;i<3;i++)
  {
    cout<<"Enter "<<i+1<<" row : ";
    for(int j=0;j<3;j++)
    {
      cin>>b[i][j];
    }
  }
  c=sum(a,b);
  cout<<"The sum of two matrix is : "<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<c[i][j]<<" ";
    }
    cout<<endl;
  }

}