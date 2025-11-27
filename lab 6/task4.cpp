#include<iostream>
using namespace std;
int search(int a[50],int n ,int key);
int main()
{
  int n,key,a[50];
  cout<<"Enter number of values you want to enter(less than 50) : ";
  cin>>n;
  cout<<"Enter values one by one : ";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"Enter the number you want to search : ";
  cin>>key;
  cout<<"The value is present at index : "<<search(a,n,key);
  

}
int search(int a[50],int n,int key)
{
  int index=-1;
  for(int i=0;i<n;i++)
  {
    if(a[i]==key)
    {
      index=i;
      return index;
    }
    
  }
  return index;
}