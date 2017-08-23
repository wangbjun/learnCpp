#include "Coordinate.cpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void) {
  Coordinate coor[3];
  coor[0].m_iX = 3;
  coor[0].m_iY = 5;

  Coordinate *p = new Coordinate[3];
  p->m_iX = 7;
  p[0].m_iY = 9;

  (p+1)->m_iX = 11;
  (p+1)->m_iY = 13;

  for(int i=0; i<3; i++)
  {
    std::cout << coor[i].m_iX << '\t';
    std::cout << coor[i].m_iY << '\n';
  }
  std::cout << "---------------------" << '\n';
  for (size_t i = 0; i < 3; i++) {
    std::cout << p[i].m_iX << '\t';
    std::cout << p[i].m_iY << '\n';
  }
  p++;
  delete []p;
  p = NULL;
  std::cin.get();
  return 0;
}
