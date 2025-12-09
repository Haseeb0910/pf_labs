#include <iostream>
using namespace std;
string longest_word(string para);
int main()
{
  string para;
  cout << "Enter paragrapgh : ";
  getline(cin,para);
  string longest = longest_word(para);
  cout << longest;
}
string longest_word(string para)
{
  int max_length = 0;
  string current_word = "";
  string longest = "";
  for (int i = 0; i <= para.length(); i++)
  {
    if (para[i] == ' ' || para[i] == '\0')
    {
      if(current_word.length() > max_length)
      {
        max_length = current_word.length();
        longest = current_word;
      }
      current_word = "";
    }
    else
    {
      current_word += para[i];
    }
  }
  return longest;
}