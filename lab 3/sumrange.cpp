#include <iostream>
#include <string>

using namespace std;
int sumrange(int a, int b)
{
  b =b-1 ;
  int high=((a*(a+1))/2) ;
  int low =((b*(b+1))/2) ;
  return high-low ;
}
int main ()
{
  int a,b , result ;
  cout<<"enter lower limit : ";
  cin>>b ;
  cout<<"enter higher limit : ";
  cin>>a ;
  result=sumrange(a,b) ;
  cout<<"the sum of numbers in given range is : "<<result ;


}