#include<iostream>
#include<array>
using namespace std;
void diagonal_sum(int a[3][3])
{
  int sum=0;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<a[i][j]<<" ";
    }
    sum=sum+a[i][i];
    cout<<endl;
  }
  cout<<"sum of diagonal is : "<<sum;
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
  diagonal_sum(a); 
}