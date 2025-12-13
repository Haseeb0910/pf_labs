#include <iostream>
using namespace std;
struct Class{
  string name;
  string roomNO;
};
struct Teacher{
  string name;
  Class *c;
};
int main()
{
  Teacher t1;
  t1.name = "idrees";
  t1.c = new Class;
  t1.c -> name = "BSDSF24";
  t1.c -> roomNO = "B7";
  cout << t1.name << endl;
  cout << t1.c -> name << endl;
  cout << t1.c -> roomNO << endl;
}