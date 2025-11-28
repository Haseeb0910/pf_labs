#include<iostream>
using namespace std;
int main()
{
  int a[25],n;
  cout<<"enter number of  values you want to enter (number of values should be less than 25) : ";
  cin>>n;
  cout<<"Enter values : "<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    if(a[i] < a[i+1] )
    {
      if(i==n-1)
      {
        if(a[i]<=a[0])
        {
          cout<<"("<<a[i]<<","<<a[0]<<")";
        }
        else
        cout<<"("<<a[0]<<","<<a[i]<<")";
        exit(5);
        return 5;

      }

   cout<<"("<<a[i]<<","<<a[i+1]<<")";
    }
    else
     cout<<"("<<a[i+1]<<","<<a[i]<<")";

      
  }
}