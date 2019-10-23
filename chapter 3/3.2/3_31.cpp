#include <iostream>

using namespace std;

int main()
{
  constexpr size_t array_size = 10;
  int arr[array_size];

  for (auto i = 0; i != array_size; ++i){
    arr[i] = i;
  }

  for (auto i : arr){
    cout << arr[i] << endl;
  }

  return 0;
}