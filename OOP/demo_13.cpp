#include <iostream>
#include <stdlib.h>
#include "Circle.cpp"
#include "Rect.cpp"
using namespace std;

int main(int argc, char const *argv[]) {
  Shape *s1 = new Rect(3, 6);
  Shape *s2 = new Circle(5);
  s1->calcArea();
  s2->calcArea();
  delete s1;
  delete s2;
  s1 = NULL;
  s2 = NULL;
  cin.get();
  return 0;
}
