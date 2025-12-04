#include<iostream>
#include<array>
using namespace std;
void sum_row(int a[3][3])
{
  for(int i=0;i<3;i++)
  {
    int sum=0;
    for(int j=0;j<3;j++)
    {
      cout<<a[i][j]<<" ";
      sum=sum+a[i][j];
    }
    cout<<sum<<endl;
  }
}
int main()
{
  int a[3][3];
  for(int i=0;i<3;i++)
  {
    cout<<"Enter "<<i+1<<" row : ";
    for(int j=0;j<3;j++)
    {
      cin>>a[i][j];
    }
  }
  sum_row(a); 
}