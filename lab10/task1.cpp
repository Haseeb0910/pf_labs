#include<iostream>
#include<array>
using namespace std;
array<float,12> re_arranged(array<float,12>a);
int main()
{
  array<float,12>a;
  array<float,12>b;
  cout<<"Enter 12 values : ";
  for(int i=0; i<12; i++)
  {
    cin>>a[i];
  }
  b=re_arranged(a);
  for(int i=0; i<12; i++)
  {
    cout<<b[i]<<" ";
  }
}
array<float,12> re_arranged(array<float,12>a)
{
  int count=0;
  array<float,12>b;
  float last_digit=a[11];
  for(int i=0; i<11; i++)
  {
    if(a[i]<=last_digit)
    {
      b[count]=a[i];
      count++;
    }
  }
  b[count]=last_digit;
  count++;
  for(int i=0; i<11; i++)
  {
    if(a[i]>last_digit)
    {
      b[count]=a[i];
      count++;
    }
  }
  return b;
}