#include <iostream>
#include <array>
using namespace std;
void sortArray(array<float, 12>&arr);
int main() 
{
  array<float, 12> a;
  int i = 0;
  cout<<"Enter array : ";
  while(i < 12)
  {
    cin>>a[i];
    i++;
  }
  sortArray(a);
}
void sortArray(array<float, 12>&arr)
{
  int n=12;
  float last_digit = arr[n-1]; 
  int j = 0;
  int i = -1 , n = 12;
  int temp;
  while(j < n-1)
  {
    if(arr[j] <= last_digit)
    {
      i++;
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
    j++;
  }
    temp = arr[i+1];
    arr[i+1] = last_digit;
    arr[n-1] = temp;
    int k = 0;
    while(k < 12)
    {
      cout<< arr[k] << " ";
      k++;
    }
}