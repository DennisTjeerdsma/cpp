#include <iostream>
using namespace std;

int abs(int i)
{
  return i > 0 ? i : -i;
}


int main()
{
  int input;
  cout << "Enter a number ";
  cin >> input;
  cout << "The absolute result is: "<<abs(input) << endl;

  return 0;
}