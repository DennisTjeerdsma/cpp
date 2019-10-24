#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  unsigned aCnt = 0, eCnt = 0, iCnt =0, oCnt = 0, uCnt = 0;
  char ch;
  while (cin >> ch)
  {
    ch = tolower(ch);
    if (ch == 'a') ++aCnt;
    else if (ch == 'e') ++eCnt;
    else if (ch == 'i') ++iCnt;
    else if (ch == 'o') ++ oCnt;
    else if (ch == 'u') ++uCnt;
  }

  cout << "Number of a: \t" << aCnt << '\n'
    << "Number of e: \t" << eCnt << '\n'
    << "Number of i: \t" << iCnt << '\n'
    << "Number of o: \t" << oCnt << '\n'
    << "Number of u: \t" << uCnt << '\n' << endl;

  return 0;
}