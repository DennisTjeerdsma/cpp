#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  string s;
  vector<string> v;

  while (cin >> s){
    v.push_back(s);
  }

  for (auto &i : v){
    for (auto &k : i){
      k = toupper(k);
    }
  }

  for (auto i : v){
    cout << i;
  }

  cout << endl << " ";
  return 0;
}