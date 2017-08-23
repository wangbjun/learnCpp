#include <stdlib.h>
#include <iostream>

int main(int argc, char const *argv[]) {
  // const int x = 3;
  // x = 5;
  int x = 3;
  int const *p = &x;
  x = 5;

  std::cin.get();
  return 0;
}
