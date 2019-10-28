#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void capital(const string& s)
{
  for (auto i: s)
  {
    if (isupper(i))
    {
      cout << "String contains uppercase characters" << endl;
      break;
    }
  }
}


void lowercase(string& s)
{
  for (auto& i : s)
  {
    i = tolower(i);
  }

  cout << "The lowercase string is: " << s << endl;
}

int main()
{
  string s = "HELLO WORLD";
  capital(s);
  lowercase(s);
  return 0;
}