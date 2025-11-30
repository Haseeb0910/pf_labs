#include<iostream>
using namespace std;
int isSorted(int a[100],int n);
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
  int result = isSorted(a,n);
  if(result==0)
  {
    cout<<"Array is sorted ";
  }
  else
  cout<<"Array is not sorted from index : "<<result;
}
int isSorted(int a[100],int n){
  int index;
  for(int i=0;i<n;i++)
  {
    if(a[i]<=a[i+1])
    {
      index=0;
    }
    else
    {
      index=i;
      return index;
    }
  }
  return index;
}