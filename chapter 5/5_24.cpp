#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
  int inp1, inp2;
  float result;

  cin >> inp1 >> inp2;

  if (inp2 == 0)
  {
    throw runtime_error("Second number cannot be 0");
  }
  else 
  {
   result = static_cast<float>(inp1)/inp2;
  }

  cout << "The result of the division is: " << result << endl;

  return 0;
}