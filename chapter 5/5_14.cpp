#include <iostream>
#include <string>

using namespace std;

int main()
{
  pair<string, int>max_duplicated;
  int count = 1;

  for (string str, prestr; cin >> str; prestr = str)
  {
    if (str == prestr) ++count;
    else count = 1;
    if (count > max_duplicated.second) max_duplicated = { prestr, count};
  }

  if (max_duplicated.first.empty()) cout << "No duplicate strings." << endl;
  else cout << "the word: " << max_duplicated.first << " occurred " << max_duplicated.second << " times." << endl;

  return 0;
}