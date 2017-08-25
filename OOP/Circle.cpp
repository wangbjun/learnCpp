#include "Circle.h"

Circle::Circle(double r)
{
  std::cout << "Circle()" << '\n';
  m_dR = r;
}
Circle::~Circle()
{
  std::cout << "~Circle()" << '\n';
}
double Circle::calcArea()
{
  std::cout << "Circle -> calcArea()" << '\n';
  return 3.14 * m_dR * m_dR;
}
