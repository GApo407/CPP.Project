#include <iostream>
using namespace std;

class Person
{
public:
   Person(int age)
   {
      // this指针指向的是 被调用的成员函数所属对象
      this->age = age;
   }

   Person &PersonAddAge(Person &p)  // 加&引用返回对象本体，不加则会创建一个新对象
   {
      this->age += p.age;
      return *this; // 加*号返回对象本体
   }

   int age;
};

// 1.解决名称冲突
void test01()
{
   Person p1(18);

   cout << "p1的年龄为：" << p1.age << endl;
}

// 2.返回对象本身用*this
void test02()
{
   Person p1(10);

   Person p2(10);

   // 链式编程思想
   p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

   cout << "p2的年龄为：" << p2.age << endl;
}

int main()
{
   // test01();
   test02();
   return 0;
}
