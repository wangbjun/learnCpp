#include <iostream>
#include "Worker.h"
using namespace std;

Worker::Worker()
{
  std::cout << "Worker()" << '\n';
}
Worker::~Worker()
{
  std::cout << "~Worker()" << '\n';
}

void Worker::work()
{
  std::cout << "work()" << '\n';
}
