#include <stdlib.h>
#include <iostream>

int main(int argc, char const *argv[]) {
  int *p = new int[10];
  if (NULL == p) {
    return 0;
  }
  p[0] = 20;
  std::cout << p[0] << '\n';
  delete []p;
  p = NULL;
  std::cin.get();
  return 0;
}
