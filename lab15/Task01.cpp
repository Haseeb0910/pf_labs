#include<iostream>
using namespace std;
struct teacher 
{
  string name;
  string course;
  string department;
  int rank;
};
int main()
{
  teacher **a = new teacher *[4];
  for(int i=0; i<4; i++)
  {
    a[i] = new teacher;
  }
  for(int j=0; j<4; j++)
  {
    cout << "Enter teacher " <<j+1 << "  name : ";
    cin >> a[j] -> name;
    cout << "Enter teacher " <<j+1 << " course : ";  
    cin >> a[j] -> course;
    cout << "Enter teacher " <<j+1 << " department : "; 
    cin >> a[j] -> department;
    cout << "Enter teacher " <<j+1 << " rank : ";
    cin >> a[j] ->rank;
  }
  cout << "Sr.NO "<<"\t"<<"\t"<< "NAME" <<"\t"<<"\t" <<" COURSE" <<"\t"<<"\t"<<" DEPARTMENT" <<"\t"<<"\t" <<"RANK " << endl;
  for (int i=0; i<4; i++)
  {
    cout << i+1 <<" \t"<<"\t" << a[i] -> name <<" \t"<<"\t" << a[i] -> course <<" \t"<<"\t" << a[i] -> department <<" \t"<<"\t"<<"\t"<< a[i] -> rank <<endl ;
  }
  for(int i = 0; i < 4; i++)
  {
    delete[] a[i];
  }
  delete[] a;
}