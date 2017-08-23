#include "Coordinate.h"
#include <iostream>
#include <string>
using namespace std;

Coordinate::Coordinate(int x, int y)
{
  m_iX = x;
  m_iY = y;
}

Coordinate::~Coordinate()
{

}

void Coordinate::setX(int x)
{
  m_iX = x;
}

int Coordinate::getX()
{
  return m_iX;
}

void Coordinate::setY(int y)
{
  m_iY = y;
}

int Coordinate::getY()
{
  return m_iY;
}
