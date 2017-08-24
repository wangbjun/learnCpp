#include <iostream>
#include <stdlib.h>
#include "Worker.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
  Worker *p = new Worker();
  p->m_strName = "Jim";
  p->m_iAge = 10;
  p->eat();
  p->m_iSalary = 1000;
  p->work();
  delete p;
  p = NULL;
  cin.get();
  return 0;
}
