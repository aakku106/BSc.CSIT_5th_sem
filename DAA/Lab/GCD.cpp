#include <iostream>
#include <ostream>
int main(void) {

  int a, b, temp;
  std::cout << "Enter 2 num\n";
  std::cin >> a;
  std::cin >> b;

  while (b != 0) {
    temp = a % b;
    a = b;
    b = temp;
  }
  std::cout << "GCD: " << a << "\n";
  return 0;
}
