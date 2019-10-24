// We might use a null statement in case a statement is expected but the logic does not need a statement. example:

#include <iostream>
using namespace std;

int main()
{
  string s, sought = "test";

  while (cin >> s && s != sought)
    ;

  return 0;

}