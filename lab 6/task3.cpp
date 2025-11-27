#include<iostream>
using namespace std;
int main()
{
  int arr[20],count=0;
  cout<<"Enter 20 values in range -10000 to +10000 ";
  for(int i=0;i<20;i++)
  {
    cin>>arr[i];
    abs(arr[i]);
  }
  for(int i=0;i<20;i++)
  {
    if(arr[i]>7000)
    {
    count++;
    }
  }
  cout<<"number of rejected values are : "<<count;
  
}