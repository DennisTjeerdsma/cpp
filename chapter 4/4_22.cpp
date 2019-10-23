#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> grades{10,90,74,38,20};

  for (auto i: grades)
  {
    cout <<( i >= 90 ? "High" : i < 60 ? "Fail" : i <= 75 ? "Low Pass" : "Pass");

    cout << "-------------";

    if (i >= 90) {cout << "High";}
    else if (i < 60) {cout << "Fail";}
    else if (i <= 75) {cout << "Low pass";}
    else {cout << "pass";}

    cout << endl;
  }
}