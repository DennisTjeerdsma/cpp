#include <iostream>
using namespace std;

int count_add(int x)
{
  static size_t ctr = 0;
  ctr += x;
  return ctr;
}



int main()
{
  for (size_t i = 0; i != 10; ++i)
  {
    cout << count_add(i) << endl;
  }

  return 0;
}