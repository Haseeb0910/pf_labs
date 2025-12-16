#include <iostream>
using namespace std;
template <typename T, typename U>
auto sum_array2(T arr[], U size)
{
  T sum = 0;
  for (U i = 0; i < size; i++)
  {
    sum = sum +arr[i];
  }
  return sum;
}
int main()
{
  int arr[] = {1,2,3,4,5};
  float arr2[] = {1.0,2.0,3.4,5.4,6};
  char arr3[] = {'a','b','h','l','d'};
  bool arr4[] = {true,false,true,false,true};
  double arr5[] = {2.34,5.46,67.5,76.5,43};
  const int size = 5;
  cout << sum_array2(arr,size) <<endl;
  cout << sum_array2(arr2,size) <<endl;
  cout << sum_array2(arr3,size) <<endl;
  cout << sum_array2(arr4,size) <<endl;
  cout << sum_array2(arr5,size) <<endl;
}

