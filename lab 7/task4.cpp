#include<iostream>
using namespace std;
struct ratio{
  int num;
  int den;
};
int main()
{
  int num,nume=1,deno=1;
  ratio a[50];
  cout<<"enter number of ratios you want to enter : ";
  cin>>num;
  for(int i=0;i<num;i++)
  {
    cout<<"enter ratio no : "<<i+1<<endl;
    cin>>a[i].num;
    cin>>a[i].den;
    if(a[i].den==0)
    {
      cout<<"!! invalid input !!";
      exit(5);
      return 5;
    }
  }
  // nume=a[0].num*a[1].num;
  // deno=a[0].den*a[1].den;
  for(int i=0;i<num;i++)
  {
    nume=nume*a[i].num;
    deno=deno*a[i].den; 
  }
  cout<<"Multiplication of all ratios is : ";
  cout<<nume<<"/"<<deno;
}