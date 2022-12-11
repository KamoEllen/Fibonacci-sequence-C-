#include <iostream>

int main() {
  // define the maximum number to compute the Fibonacci sequence to
  int max = 20;

  // define the first two numbers in the sequence
  int a = 0;
  int b = 1;

  // print the first two numbers in the sequence
  std::cout << a << " " << b << " ";

  // compute and print the remaining numbers in the sequence up to the maximum
  for (int i = 0; i < max; i++) {
    int c = a + b;
    std::cout << c << " ";
    a = b;
    b = c;
  }

  // print a newline at the end
  std::cout << std::endl;

  return 0;
}
