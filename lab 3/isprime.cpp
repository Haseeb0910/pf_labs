#include<iostream>
using namespace std;
bool isprime(int x) ;
int main()
{
  int num;
  char res;
  cout<<"Enter the number : ";
  cin>>num;
  res = isprime(num);
  if(res==true)
   cout<<"The number you enterd is prime";
  else
   cout<<"The number you entered is not a prime number";
}
bool isprime(int x)
{
  char res;
  int i=2;
  while(i<x)
  {
    if(x % i == 0)
    {
    res=false;
    return res;
    }  
    i++;
  }
  res = true;
  return res;
}