#include<iostream>
using namespace std;
void pattern(int a);
int main()
{
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  pattern(n);
}
void pattern(int a)
{
  
  for(int i=1; i<=a; i++)
  {
    for(int j=1; j<=i; j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }

}