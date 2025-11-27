#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  
  float j=0;
  while(j<=3.14)
  {
  cout<<(sin(j)*sin(j))+(cos(j)*cos(j))<<endl;
   j = j+0.01; 
}
}
