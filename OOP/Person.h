#include <string>
using namespace std;

class Person
{
public:
  Person(string name="Jim");
  ~Person();
  void eat();
  void play();
protected:
  string m_strName;
  int m_iAge;
};
