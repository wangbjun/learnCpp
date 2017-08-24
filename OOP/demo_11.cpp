#include <iostream>
#include <stdlib.h>
#include "Soldier.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
  Soldier soldier;
  soldier.play(5);
  soldier.work();
  soldier.Person::play();
  cin.get();
  return 0;
}
