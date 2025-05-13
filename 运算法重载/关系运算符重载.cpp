#include <iostream>
using namespace std;

// 关系运算符
class Person
{
public:
   int m_Age;
   string m_Name;

   Person(string name, int age)
   {
      m_Age = age;
      m_Name = name;
   }

   bool operator==(Person &p)
   {
      if (this->m_Age > p.m_Age || this->m_Age == p.m_Age)
      {
         return true;
      }
      return false;
   }

   bool operator!=(Person &p)
   {
      if (this->m_Age > p.m_Age || this->m_Age == p.m_Age)
      {
         return false;
      }
      return true;
   }
};

void test01()
{
   Person p1("Tom",19);
   Person p2("Kimi",21);
   if (p1 == p2)
   {
      cout << p1.m_Name << " 和 " << p2.m_Name << " 是同龄人" << endl;
   }
   else
   {
      cout << p1.m_Name << " 和 " << p2.m_Name << " 不是同龄人" << endl;
   }
   if (p1 != p2)
   {
      cout << p1.m_Name << " 和 " << p2.m_Name << " 不是同龄人" << endl;
   }
   else
   {
      cout << p1.m_Name << " 和 " << p2.m_Name << " 是同龄人" << endl;
   }
}

int main()
{
   test01();
}