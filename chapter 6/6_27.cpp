#include <iostream>
#include <initializer_list>
using namespace std;

void sum(initializer_list<int> const& il)
{
  int sum = 0;
  for (auto i : il)
  {
    sum += i; 
  }
  cout << "The sum of the list is: " << sum << endl;
}

int main()
{
  auto il = {1, 2, 3, 4, 5, 6, 7};
  sum(il);
  return 0;
}