#include "Teacher.h"
#include <iostream>
#include <string>
using namespace std;

// Teacher::Teacher()
// {
//   m_strName = "Jim";
//   m_iAge = 25;
//   m_strGender = "男";
//   std::cout << "Teacher()" << '\n';
// }

Teacher::Teacher(string name, int age, int max):m_strName(name),m_iAge(age),m_iMax(max)
{
  std::cout << "Teacher()::" << '\n';
}

Teacher::~Teacher()
{
  std::cout << "~Teacher()" << '\n';
}

// Teacher::Teacher(string name, int age, string gender)
// {
//   m_strName = name;
//   m_iAge = age;
//   m_strGender = gender;
//   std::cout << "Teacher(string name, int age)" << '\n';
// }

void Teacher::setName(string _name)
{
  m_strName = _name;
}

string Teacher::getName()
{
  return m_strName;
}

void Teacher::setGender(string _gender){
  m_strGender = _gender;
}

string Teacher::getGender()
{
  return m_strGender;
}
void Teacher::setAge(int _age){
  m_iAge = _age;
}

int Teacher::getAge()
{
  return m_iAge;
}

void Teacher::teach()
{
  std::cout << "现在上课!" << '\n';
}

int main()
{
  Teacher t;
  Teacher *t2 = new Teacher();
  Teacher t3(t);
  delete t2;
  // Teacher t2("Merry", 15);
  // Teacher t3("James");
  // t.setName("孔子");
  // t.setGender("男");
  // t.setAge(55);
  std::cout << "---------------------------" << '\n';
  std::cout << t.getName() << '\n';
  std::cout << t.getGender() << '\n';
  std::cout << t.getAge() << '\n';
  // std::cout << "---------------------------" << '\n';
  // std::cout << t2.getName() << '\n';
  // std::cout << t2.getGender() << '\n';
  // std::cout << t2.getAge() << '\n';
  // std::cout << "---------------------------" << '\n';
  // // std::cout << t3.getAge() << '\n';
  // t.teach();
  std::cin.get();
  return 0;
}
