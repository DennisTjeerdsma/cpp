#include <iostream>
using namespace std;

int main()
{
  constexpr size_t size = 10;
  int arr[size];

  for (auto ptr = arr; ptr != arr + size; ++ptr){
    *ptr = 0;
  }

  for (auto i : arr){
    cout << i << endl;
  }

  return 0;
}