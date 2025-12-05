#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct student
{
  int rollno;
  string name;
  float matric;
  float inter;
};
int main()
{
  student s;
  cout<<"Enter Roll no : ";
  cin>>s.rollno;
  cout<<"Enter name : ";
  cin>>s.name;
  cout<<"Enter matric marks : ";
  cin>>s.matric;
  cout<<"Enter intermediate marks : ";
  cin>>s.inter;
  student *i=&s;
  cout<<endl<<"Your roll no is : "<< i->rollno<<endl;
  cout<<"Your name is : "<< i->name<<endl;
  cout<<"Your matric marks are : "<< i->matric<<endl;
  cout<<"Your intermediate no are : "<< i->inter<<endl;
}
