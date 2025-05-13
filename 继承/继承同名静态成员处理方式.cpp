#include <iostream>
using namespace std;

// 继承同名静态成员处理方式
class Base{
public:
   static int m_A;

   static void func(){
      cout << "Base - static void func() 访问" << endl;
   }

   static void func(int a){
      cout << "Base - static void func( int a ) 访问" << endl;
   }
};

int Base::m_A = 100;

class Son : public Base{
public:
   static int m_A;

   static void func(){
      cout << "Son - static void func() 访问" << endl;
   }
};

int Son::m_A = 200;

// 同名静态成员属性
void test01(){
   Son a;
   cout << "1.通过对象访问" << endl;
   cout << "Son m_A = " << a.m_A << endl;
   cout << "Base m_A = " << a.Base::m_A << endl;
   cout << "2.通过类名访问" << endl;
   cout << "Son m_A = " << Son::m_A << endl;
   // 第一个::通过类名方式访问 ::代表父类作用域下
   cout << "Base m_A = " << Son::Base::m_A << endl;
}

// 同名静态成员函数
void test02(){
   Son s;
   cout << "1.通过对象访问" << endl;
   s.func();
   s.Base::func();
   cout << "2.通过类名访问" << endl;
   Son::func();
   Son::Base::func();
   // 子类出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数
   // 如果想访问父类中被隐藏同名成员，需要加作用域
   Son::Base::func(10);
}

int main(){
   //test01();
   test02();
}
