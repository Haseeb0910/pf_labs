#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int a[9]={0,15,30,45,60,75,90,180,270};
  int i=0;
  while(i<=9)
  {
  cout<<(sin(a[i])*sin(a[i]))+(cos(a[i])*cos(a[i]))<<endl;
  i++;
}
 
}