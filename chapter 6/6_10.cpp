#include <iostream>
using namespace std;

void lol(int *ip, int *kp)
{
  swap(*ip, *kp);
}


int main()
{
  int n = 90, i = 70;
  cout << "The value of n = " << n << " The value of i = " << i << endl;
  lol(&n, &i);
  cout << "The new value of n = " << n << " The new value of i = " << i << endl;
  return 0;
}