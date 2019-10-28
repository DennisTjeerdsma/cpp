#include <iostream>
using namespace std;

int fact(int v1)
{
  int res = 1;

  while (v1 > 1)
  {
    res *= v1--;
  }

  return res;
}

int main()
{
  int input, result;
  cout << "Please enter the number you want to know the factorial off: ";
  cin >> input;
  result = fact(input);
  cout << "The factorial is: " << result << endl;
  return 0;
}