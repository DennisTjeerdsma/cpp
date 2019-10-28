#include <iostream>
using namespace std;


void swap(int* &p1, int* &p2)
{
  int temp;
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}


int main()
{
  int i = 43;
  int k = 32;

  cout << "i and k start as " << i << ", " << k << endl;
  swap(i, k);
  cout << "i and k are now " << i << ", "  << k << endl;

  return 0;
}