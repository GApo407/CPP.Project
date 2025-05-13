#include <iostream>
using namespace std;

// 继承中同名成员处理
class Base{
public:
   Base(){
      m_A = 10;
   }

   void func(){
      cout << "Base - func() 调用" << endl;
   }

   void func(int){
      cout << "Base - func(int) 调用" << endl;
   }

   int m_A;
};

class Son : public Base{
public:
   Son(){
      m_A = 20;
   }

   void func(){
      cout << "Son - func() 调用" << endl;
   }

   int m_A;
};

// 同名成员处理
void test01(){
   Son s;
   cout << "Son 中 m_A = " << s.m_A << endl;
   // 子类对象访问父类同名成员需加作用域
   cout << "Base 中 m_A = " << s.Base::m_A << endl;
}

// 同名函数处理
void test02(){
   Son s;
   s.func(); // 直接调用 调用是子类中同名成员
   s.Base::func(); // 调用父类函数 需加作用域

   // 如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏父类中所有同名成员函数
   // 如果想访问到父类中被隐藏的同名成员函数，需要加作用域
   s.Base::func(10);
}

int main(){
   test02();
}
