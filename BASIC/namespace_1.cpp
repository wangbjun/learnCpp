#include <stdlib.h>
#include <iostream>
using namespace std;

namespace A
{
  int x = 1;
  void func()
  {
    cout << "A" << '\n';
  }
}

namespace B
{
  int x = 2;
  void func()
  {
    cout << "B" << '\n';
  }
}

using namespace A;
int main(int argc, char const *argv[]) {
  cout << A::x << '\n';
  func();
  int x;
  cin.get();
  return 0;
}
