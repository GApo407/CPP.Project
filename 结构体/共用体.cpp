#include <iostream>
using namespace std;
// 共用体 与 结构体 写法相差不大 : union 变量名{};
int main()
{
   union cate
   {
      int m_class;
      char posit;
   };
   struct  People
   {
      string name;
      int num;
      char sex;
      char job;
      union cate ct;
   };

   struct People stu;
   stu.ct.m_class = 307;
   return 0;
}