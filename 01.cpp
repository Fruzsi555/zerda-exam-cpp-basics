#include <iostream>

using namespace std;

/**
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

bool bigger_or_equal(int* array, int length, int num) {
  bool result = false;
  for (int i = 0; i < length; i++) {
    if (array[i] >= num) {
	result = true;
	break;
	}
  }
  return result;
}

int main() {
  int array[] = { 3, 2, 4, 6, -1 };
  int length = sizeof(array) / sizeof(int);
  int number = 5;
  //cout << length << endl;

  bigger_or_equal(array, length, number);
  (bigger_or_equal(array, length, number) == 0) ? cout << "There is no number in the array that is bigger than or equal to " << number << endl : cout << "There is a number in the array bigger than or equal to " << number << endl;

  return 0;
}
