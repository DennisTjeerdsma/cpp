#include <iostream>
using namespace std;

int main()
{
  do
  {
    cout << "Please enter two strings: ";
    string str1, str2, result;

    cin >> str1 >> str2;
    if (str1 == str2) cout << "The strings are equal. \n";
    else cout << ((str1 < str2) ? "String 1 is less than String 2 \n" : "String 2 is less than string 1. \n");
  }

  while(cin);

  return 0;
}