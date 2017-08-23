#include <stdlib.h>
#include <iostream>
using namespace std;

typedef struct{
  int x;
  int y;
}Coord;

void func(int &a, int &b);

int main(void)
{
  int a = 10;
  int &b = a;
  b = 20;
  a = 30;
  std::cout << "b = "<< b << '\n';
  std::cout << "-------------------" << '\n';

  Coord c;
  Coord &c1 = c;
  c1.x = 10;
  c1.y = 20;

  std::cout << "c:"<< c.x << "," << c.y <<'\n';
  std::cout << "-------------------" << '\n';

  int d = 3;
  int *p = &d;
  int *&q = p;
  *q = 5;
  std::cout << "d = " << d <<'\n';
  std::cout << "-------------------" << '\n';

  int x = 3;
  int y = 5;

  func(x ,y);
  std::cout << "x = " << x << ", y = " << y << '\n';
  std::cin.get();
  return 0;
}


void func(int &a, int &b)
{
  int temp = 0;
  temp = a;
  a = b;
  b = temp;
}
