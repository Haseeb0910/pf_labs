#include <iostream>
#include <string>

using namespace std;
char grade(int num)
{
  char grad ;
  if(num>=80)
  {
  grad = 'A' ;
  return grad ;
  }
  if(num<50)
  {
  grad = 'F' ;
  return grad ;
  }
  return 'B' ;


  
}
int main()
{
int a ;
char grad ;
cout<<"enter your number :" ;
cin>>a ;
grad = grade(a) ;
cout<<"your grade is : "<<grad;


}