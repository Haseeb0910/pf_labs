#include <iostream>
using namespace std;
int main()
{
  int **ptr;
  int sum = 0;
  for(int i=-3; i<=3; i++)
  {
    cout<<*(ptr[i]);
    sum = sum + *(ptr[i]);
  }
  cout<<"The sum is "<<sum;
  ptr = NULL;
}