#include <iostream>
#include <string>
using namespace std;

int main()
{
  string ar1[5];
  string ar2[5];
  cout << "Enter full name : ";
  for (int i = 0; i < 5; i++)
  {
    getline(cin, ar1[i]);
  }
  for (int i = 0; i < 5; i++)
  {
    int j = 0, spacecount = 0, k = 0;
    bool secondPart = false;
    ar2[i] = "";
    while (j < ar1[i].length())
    {
      if (ar1[i][j] == ' ')
      {
        spacecount ++;
        if (spacecount == 1)
        {
          secondPart = true;
        }
        else if (spacecount == 2)
        {
          break;
        }
      }
      else if(spacecount == 1 && secondPart)
      {
        ar2[i] += ar1[i][j];
      }
      j++;
    }
  }
  for (int i = 0; i < 5; i++)
  {
    cout << ar2[i] <<endl;
  }
}