#include <iostream>
using namespace std;

int main()
{

  int i;
  double d;

  // i *= d, === i = i * d
  i *= static_cast<int>(d);
  cout << i << endl;  
  return 0;
}