#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
  int inp1, inp2;
  float result;

  while (cin >> inp1 >> inp2)
  {

  try {
    if (inp2 == 0)
      throw runtime_error("Input 2 must be non zero.");
    result = static_cast<float>(inp1)/inp2;
    cout << "The result of the division is: " << result << endl;
  } catch (runtime_error err) {
    cout << err.what() << "\nTry again? Enter y or n."<<endl;
    char c;
    cin >> c;

    if (!cin || c == 'n')
      break;
    }
  }
  return 0;
}