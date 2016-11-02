#include <iostream>

using namespace std;

/**
 * Create a function that takes an integer and returns how many divisors it has
 */

int numbers_divisors(int number) {
  int counter = 0;
  for (int i = 1; i <= number; i++) {
    if (number % i == 0) {
      counter++;
    }
  }
  return counter;
}

int main() {
  int number = 60;

  cout << number << " has " << numbers_divisors(number) << " divisors";

  return 0;
}
