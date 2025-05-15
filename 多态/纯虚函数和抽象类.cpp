#include <iostream>
using namespace std;

// 纯虚函数 语法： virtual 返回值类型 变量名 （形参） = 0；

// 纯虚函数和抽象类

class Base {
public:
   // 纯虚函数
   // 只有一个纯虚函数，这个类称为抽象类
   // 抽象类特点：
   // 1.无法实例化对象
   // 2.抽象类的子类，必须要重写父类中的纯虚函数，否则也属于抽象类
   virtual void func() = 0;
};

class Son : public Base {
public:
   void func() override {
      cout << "func 函数调用" << endl;
   };
};

void test01() {
   // Base b;    // 抽象类Base无法实例化对象 x
   // new Base;  //抽象类Base无法实例化对象  x

   // Son s; // 子类必须重写父类中的纯虚函数，否侧无法实例化对象 √

   Base * base = new Son;
   base->func();
}

int main() {
   test01();
   return 0;
}
