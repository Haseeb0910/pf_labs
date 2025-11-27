#include<iostream>
using namespace std;
int sum(int n);
int main()
{
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  cout<<"The sum of numbers is : "<<sum(n);


}
int sum(int n)
{
  int lastdigit,SUM=0;
  for(int i=1;i<=n;i++)
  {
    lastdigit=n%10;
    SUM=SUM+lastdigit;
    n=n/10;
  }
  return SUM;

}