#include <iostream>
using namespace std;


int main()
{
  string s1, s2;
  cin >> s1;
  cin >> s2;

  if (s1 == s2){
    cout << "The strings are equal" << endl;
  }
  else if ( s1 > s2){
    cout << s1 << endl;
  }
  else if (s2 > s1){
    cout << s2 << endl;
  }
}