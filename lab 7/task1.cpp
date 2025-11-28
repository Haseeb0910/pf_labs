#include<iostream>
using namespace std;
struct ratio{
  int num;
  int den;
};
void outRatio(ratio a);
ratio inRatio();

int main()
{
  ratio a;
  cout<<"Enter numerator and then denominator : ";
  a=inRatio();
  if(a.den==0)
  {
    cout<<"invalid input";
    exit(5);
    return 5;
  }
  cout<<"ratio is : ";
  outRatio(a);
  return 0;
}
ratio inRatio()
{
  ratio a;
  cin>>a.num;
  cin>>a.den;
  return a;
}
void outRatio(ratio a)
{
  
  cout<<a.num<<"/"<<a.den;

}