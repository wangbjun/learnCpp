#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
  // Teacher();
  // Teacher(string name, int age=20, string gender="男");
  Teacher(string name="Jim", int age=25, int max=90);
  ~Teacher();
  void setName(string _name);
  string getName();
  void setGender(string _gender);
  string getGender();
  void setAge(int _age);
  int getAge();
  void teach();
private:
  string m_strName;
  string m_strGender;
  int m_iAge;
  const int m_iMax;
};
