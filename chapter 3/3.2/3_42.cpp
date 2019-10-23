#include <vector>
#include <iostream>

using namespace std;

int main()
{
  int arr[] = {1,2,3,4,5,6};

  vector<int> v(begin(arr), end(arr));

  for (auto i : v)
  {
    cout << i << endl;
  }

  int arr2[v.size()];

  for (auto i = 0; i != v.size(); ++i)
  {
    arr2[i] = v[i];
  }

  for (auto i: arr2)
  {
    cout << i << endl;
  }


  return 0;
}