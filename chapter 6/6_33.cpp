#include <iostream>
#include <vector>

using namespace std;

void print(vector<int>::const_iterator first, vector<int>::const_iterator last)
{
  if (first != last)
  {
    cout << *first << " ";
    print(++first, last);
  }
}

int main()
{
  vector<int> v1 = {1, 2, 3, 4, 5, 6};
  print(v1.cbegin(), v1.cend());
  return 0;

}