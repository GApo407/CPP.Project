#include <iostream>
using namespace std;

// 类对象作为类成员

// 手机类
class Phone
{
public:
   Phone(string pName): m_PName(pName)
   {
      cout << "Phone的构造函数调用" << endl;
   }
   ~Phone()
   {
      cout << "Phone的析构函数调用" << endl;
   }
   // 手机品牌
   string m_PName;
};

// 人类
class Person
{
public:
   Person(string name, string phone): m_Name(name), m_phone(phone) // Phone m_phone(phone)
   {
      cout << "Person的构造函数调用" << endl;
   }
   ~Person()
   {
      cout << "Person的析构函数调用" << endl;
   }
   // 姓名
   string m_Name;
   // 手机
   Phone m_phone;
};

// 当其他类对象作为本类成员，构造的时候先构造类对象，再构造自身 析构顺序与构造相反
void test01()
{
   Person p1("张三", "苹果");
   cout << p1.m_Name << "拿着" << p1.m_phone.m_PName << endl;
}
int main()
{
   test01();
   return 0;
}
