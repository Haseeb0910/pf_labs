#include<iostream>
using namespace std;
int main()
{
  int n ;
  cout<<"enter a number : ";
  cin>>n;
  int i=1;
  int sum=0;
  while(i<n)
  {
    if(n%i==0)
    {
    cout<<i<<endl;
    sum=sum+i;

    }
    i++;
    
  }
  cout<<sum;
}