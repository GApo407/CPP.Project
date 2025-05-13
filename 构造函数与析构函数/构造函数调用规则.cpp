#include <iostream>
using namespace std;

// 构造函数的调用规则
// 1.创建一个类，c++编译器会给每个类都添加3个函数
// 默认构造  （空实现）
// 析构函数  （空实现）
// 拷贝构造  （值拷贝）

// 2.如果写了有参构造函数，编译器不会提供默认构造函数
//   如果写了拷贝构造函数，编译器就不会提供其他的构造函数
//  拷贝构造函数 > 有参构造函数 > 默认构造函数
//  如果用户定义有参构造函数，c++不再提供默认无参构造函数，但会提供默认拷贝构造函数
//  如果用户定义拷贝构造函数，c++不会提供其他构造函数
class Person
{
public:
   Person()
   {
      cout << "Person的默认构造函数调用" << endl;
   }
   Person(int age)
   {
      cout << "Person的有参构造函数调用" << endl;
      m_age = age;
   }
   Person(const Person &p)
   {
      cout << "Person的拷贝构造函数调用" << endl;
      m_age = p.m_age;
   }
   ~Person()
   {
      cout << "Person的析构函数调用" << endl;
   }
   int m_age{};
};

void test01()
{
   Person p;
   p.m_age = 18;

   Person p2(p);

   cout << "p2的年龄为：" << endl;
}

void test02()
{
   Person p;
}
int main()
{
   test02();
   return 0;
}