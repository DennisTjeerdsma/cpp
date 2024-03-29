#include <iostream>
#include <string>

using namespace std;

string make_plural(size_t ctr, const string& word, const string& ending = "s")
{
  return (ctr > 1) ? word + ending : word;
}

int main()
{
  cout << "singular: " << make_plural(1, "success", "es") << " "
       << make_plural(1, "failure") << endl;
  cout << "plural: " << make_plural(2, "succes", "es") << " "
       << make_plural(2, "failure") << endl;
}