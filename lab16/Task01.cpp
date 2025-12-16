#include <iostream>
using namespace std;
int main()
{
  double *v[25];
  int col[25];
  for (int i = 0; i < 25; i++)
  {
    v[i] = new double[i+1];
    col[i] = (i+1);

  }
  for (int i = 0; i < 25; i++)
  {
    for (int j = 0; j < col[i]; j++)
    {
      v[i][j] = (2 + (rand() % 7));
    }
  }
  for (int i = 0; i < 25; i++)
  {
    for (int j = 0; j < col[i]; j++)
    {
      cout << v[i][j] <<" ";
    }
    cout << endl;
  }
  for (int i = 0; i < 25; i++)
  {
    delete [] v[i];
  }
}