#include <iostream>
using namespace std;
struct Date
{
  int day;
  int month;
  int year;
};
string alphaDAte(Date d);
string month(int num);
int maxDays(int month, int year);
int main()
{
  Date d[5];
  d[0] = {11, 8, 2024};
  d[1] = {32, 6, 2024};
  d[2] = {21, 5, 2024};
  d[3] = {19, 10, 2024};
  d[4] = {9, 7, 2024};
  for (int i = 0; i < 5; i++)
  {
    try
    {
    cout << alphaDAte(d[i]) << endl;
    }
    catch (string exp)
    {
     cout << "Error -- " << exp << endl;
    }
  }
}

string alphaDAte(Date d)
{
  if (d.month < 1 || d.month > 12)
  {
    throw string("Month value must be within 1 to 12.");
  }
  int maxDAys = maxDays(d.month, d.year);
  string Month_name = month(d.month);
  if (d.day < 1 || d.day > maxDAys)
  {
    throw string("Days are invalid for ") + Month_name;
  }
  string NEW_Date = to_string(d.day);
  string NEW_Year = to_string(d.year);
  string date = Month_name + " " + NEW_Date + ", " + NEW_Year;
  return date;
}
string month(int num)
{
  if (num == 1)
    return "January";
  if (num == 2)
    return "February";
  if (num == 3)
    return "March";
  if (num == 4)
    return "April";
  if (num == 5)
    return "May";
  if (num == 6)
    return "June";
  if (num == 7)
    return "July";
  if (num == 8)
    return "August";
  if (num == 9)
    return "September";
  if (num == 10)
    return "October";
  if (num == 11)
    return "November";
  if (num == 12)
    return "December";
}
int maxDays(int month, int year)
{
  int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (month == 2 && (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)))
    return 29;

  return daysInMonth[month - 1];
}