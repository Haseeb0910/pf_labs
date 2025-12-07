#include <iostream>
using namespace std;
int main()
{
  int size, sum = 0 ;
  cout << "Enter size of array : ";
  cin >> size;
  int *arr = new int[size];
  cout << "Enter values : ";
  for(int i=0; i<size; i++)
  {
    cin >> arr[i];
    sum = sum + arr[i];
  }
  cout<<"The sum of entered values is : "<<sum;
  delete[] arr;
  arr = NULL;
}