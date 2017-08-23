#include <iostream>
#include <stdlib.h>
#include "Array.cpp"

using namespace std;

int main(int argc, char const *argv[]) {
  Array arr1(10);
  std::cout << arr1.getLen() << '\n';
  std::cout << "-----------------------------" << '\n';
  arr1.printInfo().setLen(5).printInfo();
  cin.get();
  return 0;
}
