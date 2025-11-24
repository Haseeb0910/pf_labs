#include<iostream>
using namespace std;
int main()
{
  float p,q,foacl_length;
  cout<<"Enter object distance : ";
  cin>>p;
  cout<<"Enter image distance : ";
  cin>>q;
  foacl_length=(p*q)/(p+q);
  cout<<"Focal length is : "<<foacl_length;
}