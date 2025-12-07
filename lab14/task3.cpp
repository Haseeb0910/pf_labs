#include<iostream>
using namespace std;
int main()
{
  int ar[5]={15,7,31,1,-2};
  for(int i=0; i<5; i++)
  {
    cout<<ar[i]<<" ";
  }
  cout<<endl;
  char *ptr ;
  ptr = (char*)ar;
  for(int i=0; i<19; i++)
  {
    cout<<ptr[i]<<" ";
  }
}