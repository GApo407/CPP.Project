#include <iostream>
using namespace std;

// 赋值运算符重载
class Person
{
public:
   Person(int age)
   {
      m_Age = new int(age);
   }

   ~Person()
   {
      if (m_Age != nullptr)
      {
         delete m_Age;
         m_Age = nullptr;
      }
   }

   Person &operator=(Person &p)
   {
      // 编译器是提供浅拷贝
      // m_Age = p.m_A;

      // 应该先判断是否有属性在堆区，如果有先释放干净，再进行深拷贝
      if (m_Age != nullptr)
      {
         delete m_Age;
         m_Age = nullptr;
      }

      // 深拷贝
      m_Age = new int(*p.m_Age);

      // 返回对象自身
      return *this;
   }

   int *m_Age;
};

void test01()
{
   Person p1(18);
   Person p2(20);
   Person p3(30);
   p3 = p2 = p1; // 赋值操作
   cout << "p1的年龄为：" << *p1.m_Age << endl;
   cout << "p2的年龄为：" << *p2.m_Age << endl;
   cout << "p3的年龄为：" << *p3.m_Age << endl;
}

int main()
{
   test01();
   return 0;
}
