
#include <iostream>
int main(void) {
  int a = 0, b = 1, fib;
  // std::cout << " 0  1 ";
  for (int i = 0; i < 10; i++) {
    //   fib = a + b;
    //   a = b;
    //   b = fib;
    //   std::cout << " " << fib << " ";
    std::cout << a << " ";
    fib = a + b;
    a = b;
    b = fib;
  }
  return 0;
}
