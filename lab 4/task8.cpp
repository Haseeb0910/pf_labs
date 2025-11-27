#include<iostream>
#include<cmath>
using namespace std ;
bool isprime(int n) 
{ 
bool r = true; 
int i = 2; 
while (i < n) 
{ 
if (n % i == 0) 
{ 
r = false; 
} 
i = i + 1; 
} 
return r; 
}
int main()
{
  for(int i=3 ; i<=10000 ; i++)
  {
    if(isprime(i)==true)
    cout<<i<<endl;
  }
}