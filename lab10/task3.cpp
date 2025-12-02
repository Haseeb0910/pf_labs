#include<iostream>
#include<array>
using namespace std;
int main()
{
  array<float,15>a;
  array<float,15>b;
  int mid;
  cout<<"Enter array : ";
  for(int i=0;i<15;i++)
  {
    cin>>a[i];
  }
  cout<<"Enter the position to which first array is sorted : ";
  cin>>mid;
  int l=0;
  int r=mid+1;
  int i=0;
  while(l<=mid && r<15)
  {
    if(a[l]<=a[r])
    {
      b[i]=a[l];
      l++;
      i++;
    }
    else
    {
      b[i]=a[r];
      r++;
      i++;
    }
  }
  while(l<=mid)
  {
    b[i]=a[l];
    i++;
    l++;
  }
  while(r<15)
  {
    b[i]=a[r];
    i++;
    r++;
  }
  for(int i=0;i<15;i++)
  {
    cout<<b[i]<<" ";
  }
}