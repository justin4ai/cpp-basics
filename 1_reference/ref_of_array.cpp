#include <iostream>

int main() {
  int arr[3] = {1, 2, 3};
  int (&ref)[3] = arr; // declare array size unlike pointer

  // int arr[3][2] = {1, 2, 3, 4, 5, 6};
  // int (&ref)[3][2] = arr;

  ref[0] = 2;
  ref[1] = 3;
  ref[2] = 1;

  std::cout << arr[0] << arr[1] << arr[2] << std::endl;
  return 0;
}