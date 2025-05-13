#include <iostream>
using namespace std;
/*
设计一个类，可以封装学生实体的属性和行为
属性（类的成员变量）：学号，姓名，年龄，地址
行为（类的成员方法（函数））：自我介绍
 */
class Student;  //类的声明
class Student   //类的实现
{
  public:
  int id{};        // 学号
  string name;   // 姓名
  int age{};       // 年龄
  string addr;   // 地址

  void say_hi() const
  {
    cout << "我是：" << name << ", id：" << id << ", 年龄：" << age << ", 地址:" << addr << endl;
  }
};

int main() {
  // 使用这个类，就是得到"类对象"（类类型的变量）来干活
  // 方式1：先声明一个类对象，然后对类对象的成员变量赋值
  class Student stu1;    //声明了Student类型的一个变量（就是类对象）
  stu1.id = 1;           //给stu的id成员变量赋值
  stu1.name = "大黄";    // 给stu的name成员变量赋值
  stu1.age = 18;
  stu1.addr = "横沥";
  stu1.say_hi();
  // 方式2:声明和赋值同步应用
  class Student stu2 = {2,"小黄",17,"横沥"};
  stu2.say_hi();=
  // 方法2（改版）：
  class Student stu3{3,"小黑",19,"东坑"};
  return 0;
}