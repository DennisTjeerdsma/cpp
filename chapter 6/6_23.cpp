#include <iostream>
using namespace std;

void print(const char *cp)
{
  if (cp)
  {
    cout << *cp << endl;
  }
}

void print(const int &i)
{
  if (i)
    cout << i << endl;
}

void print(const int *beg, const int *end)
{
  while (beg != end)
    cout << *beg++ << endl;
}

void print(const int ia[], size_t size)
{
  for (size_t i = 0; i != size; ++i)
  {
    cout << ia[i] << endl;
  }
}

void print(int (&arr)[2])
{
  for (auto i : arr)
  {
    cout << i << endl;
  }
}



int main()
{
  int i = 0;
  int j[2] = {0, 1};
  char ch[5] = "pezy";

  print(ch);
  print(begin(j), end(j));
  print(i);
  print(j, end(j) - begin(j));
  print(j);

}