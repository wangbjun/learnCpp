#include "Rect.h"

Rect::Rect(double width, double height)
{
  std::cout << "Rect()" << '\n';
  m_dWidth = width;
  m_dHeight = height;
}

Rect::~Rect()
{
  std::cout << "Rect -> ~Rect()" << '\n';
}

double Rect::calcArea()
{
  std::cout << "Rect -> calcArea()" << '\n';
  return m_dHeight * m_dWidth;
}
