#include<iostream>
using namespace std;
void pattern(int a);
int main()
{ int n;
  cout<<"Enter a number : ";
  cin>>n;
  pattern(n);
}
void pattern(int a)
{
  int k;
  for(int i=1; i<=a; i++)
  {
    k=1;
    for(int j=1; j<=i; j++)
    {
      cout<<k;
      k++;
    }
    cout<<endl;
  }

}