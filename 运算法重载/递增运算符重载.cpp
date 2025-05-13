#include <iostream>
using namespace std;

// 递增运算符重载

// 自定义整型
class MyInteger
{
public:
   MyInteger()
   {
      m_Num = 0;
   }

   // 重载分前置++运算符  返回引用为了一直对一个数据进行递增操作
   MyInteger &operator++()
   {
      // 先进行 ++ 操作
      m_Num++;

      // 再将自身返回
      return *this;
   }

   // 重载后前置++运算符
   // void operator(int) int代表占为参数，可以用于区分前置和后置递增
   MyInteger operator++(int)
   {
      // 先记录当前结果
      MyInteger temp = *this;
      // 后递增
      m_Num++;
      // 最后返回记录结果
      return temp;

      return *this;
   }
private:
   int m_Num;
   friend ostream &operator<<(ostream &os, MyInteger p);
};

// 重载 << 运算符
ostream &operator<<(ostream &os, MyInteger p)
{
   os << p.m_Num;
   return os;
}
void test01()
{
   MyInteger myint;

   cout << ++(++myint) << endl;
   cout << myint << endl;
}

void test02()
{
   MyInteger myint_2;

   cout << myint_2++ << endl;
   cout << myint_2 << endl;
}
int main()
{
   //test01();
   test02();
   return 0;
}