#include <iostream>

using namespace std;

/**
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please multiply the total variable by 5 with it.
 */

int multiply_value(float* pointer, float number) {
  *pointer *= number;
  return *pointer;
}

int main() {
  float total = 123;
  float* pointer = &total;
  int number = 5;
  cout << "The value of total multiplied by " << number << ": " << multiply_value(pointer,5);

  return 0;
}
