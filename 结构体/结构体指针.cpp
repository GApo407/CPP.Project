#include "iostream"
using namespace std;

int main()
{
  struct Student
  {
    string name;
    int age;
    string gender;
  };
 // 先创建一个标准的结构体对象 (静态内存管理)
  struct Student stu = {"小黄", 18, "男"};
  // 创建结构体的指针 ， 指向结构体对象的地址
  struct Student * p = &stu;
  // 通过结构体，访问结构体的成员，要使用的符号的： 指针变量->结构体元素变量名
  cout << "结构体的里学生的姓名：" << p->name << endl;
  cout << "结构体的里学生的年龄：" << p->age << endl;
  cout << "结构体的里学生的性别：" << p->gender << endl;
  cout << endl;

  // 通过new操作符，申请结构体的空间
  struct Student * p2 = new Student{"大黄", 20, "男"};
    cout << "结构体2的里学生的姓名：" << p2->name << endl;
    cout << "结构体2的里学生的年龄：" << p2->age << endl;
    cout << "结构体2的里学生的性别：" << p2->gender << endl;
    delete[] p2;
  return 0;
}
