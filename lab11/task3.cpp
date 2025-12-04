#include<iostream>
#include<array>
using namespace std;
void column_sum(int a[3][3])
{
  int sum[3]={0};
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<a[i][j]<<" ";
      sum[i]=sum[i]+a[j][i];
    }
    cout<<endl;
  }
  for(int i=0;i<3;i++)
  {
    cout<<sum[i]<<" ";
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
  column_sum(a); 
}