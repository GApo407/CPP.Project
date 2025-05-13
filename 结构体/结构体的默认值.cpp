#include "iostream"
using namespace std;

int main()
{
  struct Student
  {
    string name;
    int major_code = 104;
    int dormitory_num = 1;
  };

  struct Student s1 = {"小明"};
  struct Student s2 = {"小黄", 307, 3};

  cout << "学生1的姓名：" << s1.name << endl;
  cout << "学生1的专业代码：" << s1.major_code << endl;
  cout << "学生1的宿舍楼号：" << s1.dormitory_num << endl;
  cout << endl;
  cout << "学生2的姓名" << s2.name << endl;
  cout << "学生2的专业代码" << s2.major_code << endl;
  cout << "学生2的宿舍楼号" << s2.dormitory_num << endl;
  return 0;
}