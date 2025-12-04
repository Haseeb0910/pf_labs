#include<iostream>
#include<array>
using namespace std;
void sum_matrix(int a[3][3])
{
  int sumROW[3]={0};
  int sumCOL[3]={0};
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      sumROW[i]=sumROW[i]+a[i][j];
      sumCOL[i]=sumCOL[i]+a[j][i];
    }
  }
  for(int i=0;i<3;i++)
  {
    cout<<" "<<sumCOL[i];
  }
  cout<<endl;
  for(int i=0;i<3;i++)
  {
    cout<<sumROW[i]<<" ";
    for(int j=0;j<3;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
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
  sum_matrix(a); 
}