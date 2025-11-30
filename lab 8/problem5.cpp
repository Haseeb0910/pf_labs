#include<iostream>
#include<array>
using namespace std;
struct students
  {
    string name;
    string rollno;
    float marks;
  };
void array_sort(array<students,100>&a,int n);
int main()
{
   int n;
   array<students,100> a;
   cout<<"Enter no of students you want to enter : ";
   cin>>n;
   cout<<"Start entering students details : "<<endl;
   for(int i=0;i<n;i++)
  {
     cout<<"Enter "<<i+1<<" student name , roll no and marks percentage :";
     cin>>a[i].name>>a[i].rollno>>a[i].marks;
  }
  array_sort(a,n);
  cout<<"NAME          ROLLNO      MARKS"<<endl;
  for(int i=0;i<n;i++)
  {
     // cout<<"student "<<i+1<<" details are : "<<endl;
     cout<<a[i].name<<"          "<<a[i].rollno<<"      "<<a[i].marks<<endl;
  }
}
void array_sort(array<students,100>&a,int n)
{
   for(int i=0;i<n-1;i++)
   {
   for(int j=0;j<n-i-1;j++)
   {
    if(a[j].marks>a[j+1].marks)
     {
       swap(a[j],a[j+1]); 
     }
   }
   }
}
