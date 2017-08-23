#include "Line.cpp"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  // Line *p = new Line();
  // p->setA(1,2);
  // p->setB(3,4);
  // p->printInfo();
  Line *p = new Line(1, 2, 3, 4);
  p->printInfo();
  delete p;
  p = NULL;
  std::cin.get();
  return 0;
}
