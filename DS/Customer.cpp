#include "Customer.h"

Customer::Customer(string name, int age)
{
  m_strName = name;
  m_iAge = age;
}

void Customer::printInfo() const
{
  std::cout << "name:" << m_strName << '\n';
  std::cout << "age:" << m_iAge << '\n';
  std::cout << "--------------------------" << '\n';
}
