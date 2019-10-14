#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v{1,2,3,4,5,6,7,8};

  for (decltype(v.size()) index = 0; index != (v.size()+1)/2; ++index){
    cout << v[index] + v[v.size() - 1 - index] << endl; 
  }
  return 0;
}