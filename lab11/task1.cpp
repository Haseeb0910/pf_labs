#include<iostream>
#include<array>
using namespace std;
void transpose(array<array<int,3>,3> arr)
{
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<arr[j][i]<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  array<array<int,3>,3>a;
  for(int i=0;i<3;i++)
  {
    cout<<"Enter "<<i+1<<" row : ";
    for(int j=0;j<3;j++)
    {
      cin>>a[i][j];
    }
  }
  transpose(a);
}