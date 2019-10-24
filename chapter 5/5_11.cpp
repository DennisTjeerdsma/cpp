#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  unsigned aCnt = 0, eCnt = 0, iCnt =0, oCnt = 0, uCnt = 0, newlineCnt = 0, tabCnt = 0, spaceCnt = 0, fiCnt = 0, ffCnt = 0, flCnt = 0;
  char ch, prech = '\0';
  while (cin >> noskipws >> ch)
  {
    if (ch != isblank(ch) && ch != ispunct(ch)){
      ch = tolower(ch);
    }

    switch (ch)
    {
    case 'a':
      ++aCnt;
      break;
    case 'e':
      ++eCnt;
      break;
    case 'i':
      if (prech == 'f') ++fiCnt;
      else {++iCnt;
          break;}
    case 'o':
      ++oCnt;
      break;
    case 'u':
      ++uCnt;
      break;
    case ' ':
      ++spaceCnt;
      break;
    case '\t':
      ++tabCnt;
      break;
    case '\n':
      ++newlineCnt;
      break;
    case 'f':
      if (prech == 'f') ++ffCnt;
      break;
    case 'l':
      if (prech == 'f') ++flCnt;
      break;
    }
    prech = ch;
  }

  cout << "Number of a: \t" << aCnt << '\n'
    << "Number of e: \t" << eCnt << '\n'
    << "Number of i: \t" << iCnt << '\n'
    << "Number of o: \t" << oCnt << '\n'
    << "Number of u: \t" << uCnt << '\n' 
    << "Number of space: \t" << spaceCnt << '\n'
    << "Number of tab: \t" << tabCnt << '\n'
    << "Number of newline: \t" << newlineCnt << '\n'
    << "Number of ff: \t" << ffCnt << '\n'
    << "Number of fl: \t" << flCnt << '\n'
    << "Number of fi: \t" << fiCnt << endl;

  return 0;
}