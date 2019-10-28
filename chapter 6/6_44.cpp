#include <iostream>
#include <string>

using namespace std;

inline bool isShorter(const string &s1, const string &s2)
{
  return s1.size() < s2.size();
}

int main()
{
  string s1 = "Hello", s2 = "world";
  cout << (isShorter(s1, s2) ? s1 : s2) << " is shorter." << endl;
  return 0;
}