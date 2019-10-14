#include <iostream>
using namespace std;


int main()
{
  string s1, s2;
  cin >> s1;
  cin >> s2;

  auto len_1 = s1.size();
  auto len_2 = s2.size();

  if (len_1 == len_2){
    cout << "The strings are equal" << endl;
  }
  else if ( len_1 > len_2){
    cout << s1 << endl;
  }
  else if (len_2 > len_1){
    cout << s2 << endl;
  }
}