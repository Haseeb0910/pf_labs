#include<iostream>
#include<array>
#include<string>
using namespace std;
void output(array<string,12>a);
int main()
{
  array<string,12> a;
  int i=0;
  cout<<"Enter month names : ";
  while(i<12)
  {
    cin>>a[i];
    i++;
  }
  output(a);
}
void output(array<string,12>a)
{
  int j=0;
  while(j<12)
  {
    cout<<a[j]<<" ";
    j++;
  }
}
