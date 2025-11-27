#include<iostream>
using namespace std;
int main()
{
  int s1=0,s2=0,s3=0;
  int a[]={90,80,70,87,89};
  int b[]={87,86,89,87,85};
  int c[]={89,90,87,86,85};

 
cout<<"PF  QT  FE  AVG"<<endl;
for(int i=0;i<5;i++)
{
  cout<<a[i]<<"  "<<b[i]<<"  "<<c[i]<<"  "<<(a[i]+b[i]+c[i])/3<<endl;
  s1=s1+a[i];
  s2=s2+b[i];
  s3=s3+c[i];
}
cout<<endl;
cout<<s1/5<<"  "<<s2/5<<"  "<<s3/5;

}