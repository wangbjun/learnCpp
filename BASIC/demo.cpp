#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int x = 0;
  std::cout << "请输入一个整数：" << '\n';
  cin >> x;
  std::cout << oct << x << '\n';
  cout << dec << x << endl;
  cout << hex << x << endl;

  std::cout << "请输入一个布尔值：" << '\n';
  bool y;
  std::cin >> y;
  std::cout << boolalpha << y << '\n';
  return 0;
}
