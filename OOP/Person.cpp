#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string name)
{
  m_strNam = name;
  std::cout << "Person()" << '\n';
}

Person::~Person()
{
  std::cout << "~Person()" << '\n';
}

void Person::eat()
{
  std::cout << "eat()" << '\n';
}

void Person::play()
{
  std::cout << "Person --- play()" << '\n';
  std::cout << m_strName << '\n';
}
