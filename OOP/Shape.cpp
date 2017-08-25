#include "Shape.h"

Shape::Shape()
{
  std::cout << "Shape()" << '\n';
}

Shape::~Shape()
{
  std::cout << "~Shape()" << '\n';
}

double Shape::calcArea()
{
  std::cout << "Shape -> calcArea()" << '\n';
  return 0;
}
