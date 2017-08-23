#include "Line.h"
#include <iostream>
using namespace std;

Line::Line(int x1, int y1, int x2, int y2)
{
  m_pCoorA = new Coordinate(x1, y1);
  m_pCoorB = new Coordinate(x2, y2);
  std::cout << "Line()" << '\n';
}
Line::~Line()
{
  delete m_pCoorA;
  delete m_pCoorB;
  m_pCoorA = NULL;
  m_pCoorB = NULL;
  std::cout << "~Line()" << '\n';
}

void Line::setA(int x, int y)
{
  m_pCoorA->setX(x);
  m_pCoorA->setY(y);
}

void Line::setB(int x, int y)
{
  m_pCoorB->setX(x);
  m_pCoorB->setY(y);
}

void Line::printInfo()
{
  std::cout << "("<<m_pCoorA->getX()<<","<<m_pCoorA->getY()<<")" << '\n';
  std::cout << "("<<m_pCoorB->getX()<<","<<m_pCoorB->getY()<<")" << '\n';
}
