#include<iostream>
using namespace std;
int main()
{
  int n1,n2,s1,s2,sum;
  cout<<"Enter the starting and ending numbers : ";
  cin>>n1>>n2;
  n1=n1-1;
  s1=n1*(n1+1)/2;
  s2=n2*(n2+1)/2;
  sum=s2-s1;
  cout<<"The sum of numbers between give numbers is : "<<sum;
}