#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string> grades = {"F", "D", "C", "B", "A", "A++"};

  for (int g; cin >> g;)
  {
    string letter;
    if (g < 60)
    {
      letter = grades[0];
    }
    else
    {
      letter = grades[(g-50)/10];
      if (g != 100)
      {
        if (g % 10 > 7)
        {
          letter += "+";
        }
        else if (g % 10 < 3)
        {
          letter += "-";
        }
      }
    }
      cout << "The lettergrade is: " + letter << endl;    
  }

  return 0;
}