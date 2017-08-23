#include <stdlib.h>
#include <iostream>

void func(int i, int j, int k);

void func(int i, int j);

int main()
{
  func(1, 2);
  func(1, 2, 3);
  std::cin.get();
  return 0;
}

void func(int i, int j, int k)
{
  std::cout << "A" << '\n';
}


void func(int i, int j)
{
  std::cout << "B" << '\n';
}
