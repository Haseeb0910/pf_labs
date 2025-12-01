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
  
  for(int i=a; i>=1; i--)
  {
    for(int j=i; j>=1; j--)
    {
      cout<<"X";
    }
    cout<<endl;
  }

}