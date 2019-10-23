#include <iostream>
#include <vector>
using namespace std;

bool compare(int* const pa1, int* const pa2, int* const pb1, int* const pb2)
{
  if ((pa2 - pa1) != (pb2 - pb1)){
    return false;
  }
  else {
    for (auto i = pa1, j = pb1; (i != pa2) && (j != pb2); ++i, ++j){
      if (*i != *j){
        return false;
      }
    }
  }
}


int main()
{
  constexpr size_t size = 3;

  int arr1[size] = {0, 1, 2};
  int arr2[size] = {0, 2 , 3};

  if (compare(begin(arr1), end(arr1), begin(arr2), end(arr2))){
    cout << "The two arrays are equal" << endl;
  }
  else {
    cout << "The two arrays are not equal" << endl;
  }

  vector<int> v1 = {0, 1, 2};
  vector<int> v2 = {0, 2, 3};

  cout << "=====================" << endl;
  
  if (v1 == v2){
    cout << "The two vectors are equal" << endl;
  }
  else {
    cout << "The two vectores are not equal" << endl;
  }

  return 0;
}