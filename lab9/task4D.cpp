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
    int j;
    for( j=1; j<=i; j++)
    {
      cout<<k;
      k++;
    }
    for(int l=j-2;l>=1;l--)
    {
      cout<<l;
    }
    cout<<endl;
  }

}