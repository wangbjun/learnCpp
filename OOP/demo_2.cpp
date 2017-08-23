#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {

  std::cout << "请输入用户名：" << '\n';
  string name;
  getline(cin, name);
  if (name.empty()) {
    std::cout << "内容为空" << '\n';
    std::cin.get();
    return 1;
  }
  if (name == "imooc") {
    std::cout << "You are an administrator" << '\n';
  }
  std::cout << "Hello " + name << '\n';
  std::cout << "Your name length is : " << name.size() << '\n';
  std::cout << "Your name first letter is : " << name[0] << '\n';
  std::cin.get();
  return 0;
}
