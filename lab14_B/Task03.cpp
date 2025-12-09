#include <iostream>
using namespace std;
int main()
{
  char arr1[5][100];
  char arr2[5][100];
  cout << "Enter full names : ";
  for (int i = 0; i < 5; i++)
  {
    cin.getline(arr1[i], 100);
  }
  for (int i = 0; i < 5; i++)
  {
    arr2[i][0] = '\0';
    int j = 0, k = 0, spaceCount = 0;
    bool secondpart = false;
    while (arr1[i][j] != '\0')
    {
      if (arr1[i][j] == ' ')
      {
        spaceCount++;
        if (spaceCount == 1)
        {
          secondpart = true;
        }
        else if (spaceCount == 2)
        {
          break;
        }
      }
      else if (spaceCount == 1 && secondpart)
      {
        arr2[i][k++] = arr1[i][j];
      }
      j++;
    }
    arr2[i][k] = '\0';
  }
  cout << "Second Names are :";
  for (int i = 0; i < 5; i++)
  {
    cout << arr2[i] << endl;
  }
}