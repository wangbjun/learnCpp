#include <iostream>
#include <string>
using namespace std;

/**
  * 定义类：Student
  * 数据成员：名字、年龄
  */
class Student
{
public:
  void setName(string _name)
  {
    m_strName = _name;
  }
  string getName()
  {
    return m_strName;
  }

  void setGender(string _gender)
  {
    m_strGender = _gender;
  }
  string getGender()
  {
    return m_strGender;
  }

  int getScore()
  {
    return m_iScore;
  }
  void initScore()
  {
    m_iScore = 50;
  }

  void study(int _score)
  {
    m_iScore += _score;
  }

private:
  string m_strName;
  string m_strGender;
  int m_iScore;
};

int main()
{
  Student stu;
  stu.initScore();
  stu.setName("zhangsan");
  stu.setGender("male");
  stu.study(5);
  stu.study(3);

  std::cout << stu.getName() << '\n';
  std::cout << stu.getGender() << '\n';
  std::cout << stu.getScore() << '\n';

  std::cin.get();
  return 0;
}
