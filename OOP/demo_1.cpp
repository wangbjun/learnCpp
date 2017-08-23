#include <stdlib.h>
#include <iostream>

class Coordinate
{
public:
  int x;
  int y;
  void printX()
  {
    std::cout << x << '\n';
  }
  void printY()
  {
    std::cout << y << '\n';
  }
};

int main(int argc, char const *argv[]) {

  Coordinate coor;
  coor.x = 10;
  coor.y = 20;
  coor.printX();
  coor.printY();
  std::cout << "------------------------" << '\n';
  Coordinate *p = new Coordinate();
  if (p == NULL) {
    std::cout << "申请内存失败" << '\n';
    return 1;
  }
  p->x = 100;
  p->y = 200;
  p->printX();
  p->printY();

  std::cin.get();
  delete p;
  p == NULL;
  return 0;
}
