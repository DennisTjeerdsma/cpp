#include <iostream>
using namespace std;

void reset(int &k)
{
  k = 0;
}

int main()
{
  int i = 42;
  cout << "Initial i:" << i << endl;
  reset(i);
  cout << "I after reset:" << i << endl;
  return 0;
}