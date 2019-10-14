#include <iostream>
using namespace std;

int main()
{
  string word;
  string concat;

  while (cin >> word){
    concat += word;
    cout << concat << endl;;
  }
  return 0;
}