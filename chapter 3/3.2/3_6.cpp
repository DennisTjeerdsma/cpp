#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  string s = "example.string!";
  string result;

  for (auto c : s){
    if (!ispunct(c)){
      result += c;
    }
  }

  cout << result << endl;
  return 0;
}