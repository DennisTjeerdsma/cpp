#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> v{1,2,3,4,5,6,7,8,9};

  for (auto i: v)
  {
    cout << ((i%2 != 0 ) ? i*2 : i) << endl;
  }
  return 0;
}