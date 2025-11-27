#include<iostream>
using namespace std;
int octalnum(int n);
int main()
{
  int n;
  cout<<"Enter number in ocatal : ";
  cin>>n;
  cout<<"Number in decimal is : "<<octalnum(n);

}
int octalnum(int n)
{
  int i=0,lastdigit,base=1,decimal=0;
  while(n!=0)
  {
    lastdigit=n%10;
    decimal=decimal+(lastdigit*base);
    base=base*8;
    n=n/10;
  }
  return decimal;
}