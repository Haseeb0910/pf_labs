#include <iostream>
#include <string>

using namespace std;
float focal(float p , float q)
{
float result= (p*q)/(p+q) ;
return result ;
}
int main()
{
  float p,q ,res;
  cout<<"enter image distance : " ;
  cin>>q ;
  cout<<"enter object distance : " ;
  cin>>p ;
  res =focal(p,q) ;
  cout<<"focal length is : "<<res ;

} 