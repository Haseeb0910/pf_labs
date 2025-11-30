#include<iostream>
using namespace std;
int max(int a[100],int n);
int main()
{
  int a[100],n;
  cout<<"Enter number of values you want to enter : ";
  cin>>n;
  cout<<"Start entering values : ";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"Maximum value entered is : "<<max(a,n);
}
int max(int a[100],int n)
{
  int max=a[0];
  for(int i=0;i<n;i++)
  {
    if(a[i]>a[0])
    {
      max=a[i];
    }
  }
  return max;
}
