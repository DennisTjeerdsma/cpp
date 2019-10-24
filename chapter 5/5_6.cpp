#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  vector<string> grades = {"F", "D", "C", "B", "A", "A++"};
  int grade = 0;
  while (cin >> grade)
  {
    string letter = grade < 60 ? grades[0] : grades[(grade-50)/10];
    letter += (grade == 100 || grade < 60) ? "" : (grade % 10 > 7) ? "+" : (grade % 10 < 3) ? "-" : "";
    cout << "The lettergrade is: " + letter << endl;
  }


  return 0;
}