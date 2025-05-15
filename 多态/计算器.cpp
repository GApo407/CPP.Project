#include <iostream>
using namespace std;

// 分别利用普通写法和多态技术实现计算器
class Calculator {
public:
   int m_Num1; // 操作数1
   int m_Num2; // 操作数2
   Calculator(int a, int b): m_Num1(a), m_Num2(b) {
   };

   int getResult(const string &oper) const {
      if (oper == "+") {
         return m_Num1 + m_Num2;
      }
      else if (oper == "-") {
         return m_Num1 - m_Num2;
      }
      else if (oper == "*") {
         return m_Num1 * m_Num2;
      }
      return 0;
   }
   // 如果想扩展新的功能，需求修改源码
   // 在开发中，提倡 开闭原则
   // 开闭原则，对扩展进行开放状态，对修改进行关闭
};

void test01() {
   // 创建计算器对象
   Calculator c(10, 10);
   cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
   cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
   cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
}

int main() {
   test01();
   return 0;
}
