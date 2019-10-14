#include <vector>
#include <iostream>

using namespace std;

int main()
{
  vector<int> v{1,2,3,4,5,6};

  for (decltype(v.size()) index = 0; index != v.size() - 1; ++index){
    cout << v[index] + v[index + 1] << endl;
  }

  return 0;
}