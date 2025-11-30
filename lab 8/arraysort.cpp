#include <iostream>
#include <array>
using namespace std;
void arraysort(array<int, 10> a);
int main()
{
  array<int, 10> a = {1, 2, 3, 4, 6, 5, 7, 8, 10, 9};
  int temp;
  for (int i = 0; i < 9; i++)
  {
    if (a[i] > a[i + 1])
    {
      temp = a[i];
      a[i] = a[i + 1];
      a[i + 1] = temp;
    }
  }
  for (int i = 0; i < 10; i++)
  {
    cout << a[i] << " ";
  }
}
void arraysort(array<int, 10> a)
{
  int temp;
  for (int i = 0; i < 10; i++)
  {
    if (a[i + 1] < a[i])
    {
      temp = a[i];
      a[i] = a[i + 1];
      a[i + 1] = temp;
    }
  }
}