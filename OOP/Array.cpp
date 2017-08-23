#include "Array.h"
#include <stdlib.h>
#include <iostream>

Array::Array(int len)
{
  this->len = len;
}

Array::~Array()
{

}

Array& Array::setLen(int len)
{
    this->len = len;
    return *this;
}

int Array::getLen()
{
  return this->len;
}

Array& Array::printInfo()
{
  std::cout << this->len << '\n';
  return *this;
}
