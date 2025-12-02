#include<iostream>
#include<array>
using namespace std;
int main()
{
  array<float,15> a;
  int mid;
  cout<<"Enter 15 values : ";
  for(int i = 0; i < 15; i++)
  {
    cin>>a[i];
  }
  cout<<"Enter the index to which first array is sorted : ";
  cin>>mid;
  int i = 0;
  int j = mid + 1;
  while(i <= mid && j < 15)
  {
    if(a[i] < a[j])
    {
      i++;
    }
    else
    {
      int k = j;
      int temp = a[j];
      while(k > i)
      {
      a[k] = a[k-1];
      k--;
      }
      a[i] = temp;
      i++;
      mid++;
      j++; 
    }
  }
  for(int i = 0; i < 15; i++)
  {
    cout<<a[i]<<" ";
  }
}