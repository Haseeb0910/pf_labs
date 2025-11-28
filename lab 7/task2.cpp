#include<iostream>
using namespace std;
struct ratio{
  int num;
  int den;
};

void reciprocal(ratio a);
void addInverse(ratio a);
void outRatio(ratio a);
void Multiply(ratio a , ratio b);
void addinteger(ratio a, int num);
ratio inRatio();
ratio simplify(ratio a);
void convert(int a);
bool check(ratio a, ratio b);
bool isLess(ratio a,ratio b);
void FLOAT(ratio a);

int main()
{
  int num,num2;
  ratio a,b,c;
  bool d,e;
  cout<<"Enter numerator and then denominator of 1st ratio: ";
  a=inRatio();
  cout<<"Enter numerator and then denominator of 2nd ratio: "; 
  b=inRatio();
  if(a.den==0 || b.den==0)
  {
    cout<<"invalid input";
    exit(5);
    return 5;
  }
  d=check(a,b);
  cout<<endl;
  if(d==true)
  {
    cout<<"both ratios are equal";
  }
  else
  cout<<"both ratios are not equal";
  cout<<endl;
  e=isLess(a,b);
  if(e==true)
  cout<<"first ratio is less than second "<<endl;
  else
  cout<<"first ratio is not less than second"<<endl;
  cout<<"first ratio is : ";
  outRatio(a);
  cout<<endl;
  FLOAT(a);
  cout<<endl<<"additive inverse of first ratio is : ";
  addInverse(a);
  cout<<endl<<"reciprocal of first ratio is : ";
  reciprocal(a);
  cout<<endl<<"multiplication of ratios is : ";
  Multiply(a,b);
  cout<<endl<<"enter integer you want to add with first ratio : ";
  cin>>num;
  cout<<"sum of ineteger with first ratio is : ";
  addinteger(a,num);
  c=simplify(a);
  cout<<endl<<"simplified form is : "<<c.num<<"/"<<c.den;
  cout<<endl<<"Enter another integer you want to convert to ratio : ";
  cin>>num2;
  convert(num2);
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
void addInverse(ratio a)
{  
  cout<<-a.num<<"/"<<a.den;
}
void reciprocal(ratio a)
{  
  cout<<a.den<<"/"<<a.num;
}
void Multiply(ratio a,ratio b)
{
  cout<<a.num*b.num<<"/"<<a.den*b.den;
}
void addinteger(ratio a,int num)
{
  cout<<((a.den*num)+a.num)<<"/"<<a.den;
}
ratio simplify(ratio a)
{
  for(int i=2;i<=a.den && i<=a.num;i++)
  {
    while(a.num%i==0 &&a.den%i==0)
    {
      a.num=a.num/i;
      a.den=a.den/i;
    }
  }
  return a;
}
void convert(int a)
{
  cout<<"1/"<<a;
}
bool check(ratio a,ratio b)
{
  bool chek=false;
  if(a.num==b.num && a.den==b.den)
  {
    chek=true;
  }
  return chek;
}
bool isLess(ratio a,ratio b)
{
  bool less=false;
  float first,second;
  first=float(a.num)/float(a.den);
  second=float(b.num)/float(b.den);
  if(first<second)
  less=true;
  return less;
}
void FLOAT(ratio a)
{
  cout<<"Ratio in float is : ";
  cout<<float(a.num)/float(a.den);
}