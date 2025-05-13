#include <iostream>
using namespace std;

// 初始化列表
class Person
{
public:
   // 传统方式初始化
   // Person(int a, int b, int c)
   // {
   //    m_A = a;
   //    m_B = b;
   //    m_C = c;
   // }

   // 初始化列表方式初始化
   Person(int a, int b, int c):m_A(a),m_B(b),m_C(c){}
   int m_A;
   int m_B;
   int m_C;
};
int main()
{
   // Person p1(10,20,30);
   Person p1(30,20,10);
   cout << "m_A: " << p1.m_A << endl;
   cout << "m_B: " << p1.m_B << endl;
   cout << "m_C: " << p1.m_C << endl;
   return 0;
}
