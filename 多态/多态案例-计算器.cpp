#include <iostream>
using namespace std;
// C++开发提倡使用多态设计程序结构，因为多态有点很多

// 利用多态实现计算器
// 1.组织结构清晰
// 2.可读性强
// 3.对于前期和后期修改和维护高

// 创建计算器抽象基类
class AbstractCaluator {
public:
   int m_Num1{};
   int m_Num2{};

   virtual int getResult() {
      return 0;
   }
};

//加法计算器类
class AddCalucuator : public AbstractCaluator {
public:
   int getResult() override {
      return m_Num1 + m_Num2;
   }
};

//减法计算器类
class SubCalucuator : public AbstractCaluator {
public:
   int getResult() override {
      return m_Num1 - m_Num2;
   };
};

//乘法计算器类
class MulCalucuator : public AbstractCaluator {
public:
   int getResult() override {
      return m_Num1 * m_Num2;
   }
};

void test01() {
   // 多态使用条件
   // 父类指针或者引用指向子类对象

   // 加法运算
   AbstractCaluator *abc = new AddCalucuator;
   abc->m_Num1 = 10;
   abc->m_Num2 = 10;

   cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;

   // 释放内存
   delete abc;

   // 减法运算
   abc = new SubCalucuator;
   abc->m_Num1 = 100;
   abc->m_Num2 = 100;
   cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;

   delete abc;

   // 乘法运算
   abc = new MulCalucuator;
   abc->m_Num1 = 100;
   abc->m_Num2 = 100;
   cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;

   delete abc;
}

int main() {
   test01();
   return 0;
}
