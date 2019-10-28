#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *arg[])
{

  string str;
  
  for (int i = 1; int != argc; ++i)
  {
    str += string(argv[i] + " ");
  }

  cout << str << endl;
  return 0;
}