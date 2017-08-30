#include <iostream>
#include "stdlib.h"
#include "Time.cpp"
using namespace std;

void printTime(Time &t)
{
  std::cout << t.m_iHour << '\n';
}

int main(int argc, char const *argv[]) {
  Time t(6, 24, 25);
  printTime(t);
  cin.get();
  return 0;
}
