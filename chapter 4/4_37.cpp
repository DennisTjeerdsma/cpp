#include <iostream>
using namespace std;

int main()
{
  int i;
  double d;
  const string *ps;
  char *pc;
  void *pv;

  pv = const_cast<string*>(ps);
  i = static_cast<int>(*pc);
  pv = static_cast<void*>(&d);
  pc = static_cast<char*>(pv);

  return 0;
}