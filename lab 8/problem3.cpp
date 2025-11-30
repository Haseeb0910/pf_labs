#include<iostream>
using namespace std;
int last_occurence(int a[100],int n, int key);
int main()
{
  int a[100],n,key;
  cout<<"Enter number of values you want to enter : ";
  cin>>n;
  cout<<"Start entering values : ";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"Enter key value to check its last occurence : ";
  cin>>key;
  int result=last_occurence(a,n,key);
  if(result != 0)
  cout<<"Key values last occurence is : "<<result;
  else
  cout<<"Key value not exist";
}
int last_occurence(int a[100],int n, int key)
{
  int index=0;
  for(int i=0;i<n;i++)
  {
    if(key==a[i])
    {
      index=i;
    }
  }
  return index;
}

