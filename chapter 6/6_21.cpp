#include <iostream>
using namespace std;

void compare(const int i, const int *const k)
{
  cout << (i > *k ? i : *k) << endl; 
}

int main()
{
  int i = 42;
  int k = 50;
  compare(i, &k);
  return 0;
}