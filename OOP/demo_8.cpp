#include "Line.cpp"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  // Coordinate *p1 = NULL;
  // p1 = new Coordinate(1, 2);
  // Coordinate *p2 = new Coordinate(3, 4);
  // std::cout << p1->m_iX + (*p2).m_iX << '\n';
  // std::cout << p1->m_iY + (*p2).m_iY << '\n';
  // delete p1;
  // delete p2;
  // p1 = NULL;
  // p2 = NULL;
  // Coordinate p1(1, 2);
  // Coordinate *p2 = &p1;
  // p2->m_iX = 10;
  // p2->m_iY = 20;
  //
  // std::cout << p1.m_iX << '\n';
  // std::cout << p1.m_iY << '\n';

  Line *p = new Line(1, 2, 3, 4);
  p->printInfo();
  std::cout << sizeof(p) << '\n';
  std::cout << sizeof(Line) << '\n';
  delete p;
  p = NULL;
  std::cin.get();
  return 0;
}
