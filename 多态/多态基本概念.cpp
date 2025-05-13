#include <iostream>
using namespace std;

// 多态

// 动物类
class Animal{
public:
   // 虚函数
   virtual void speak(){
      cout << "动物在说话" << endl;
   }
};

// 猫类
class Cat : public Animal{
public:
   // 重写 函数返回值类型 ，函数名 参数列表 完全相同
   // override 的作用：
   // 1.
   // 让编译器检查你是否真的在重写基类中的虚函数
   // 如果你拼写错了函数名、 参数不一致等，没有重写成功，编译器会报错。
   // 如果不写 override，你可能无意中“ 隐藏了” 基类函数，而你却不知道。
   // 2.
   // 增强代码可读性，明确意图：这是重写而不是重载或隐藏
   void speak() override{
      cout << "猫在说话" << endl;
   }
};

// 狗类
class Dog : public Animal{
public:
   void speak(){
      cout << "狗在讲话" << endl;
   }
};

// 执行说话的函数
// 地址早绑定 在编译阶段确定函数地址
// 如果想执行让猫说话，那函数地址不能提前绑定，需要在程序运行时绑定，也就是晚绑定

// 动态多态条件：
// 1.有继承关系
// 2.子类重写父类的虚函数

// 动态多态使用：
// 1。父类的指针或者引用 指向子类对象
void doSpeak(Animal &animal) { // Animal &animal = cat;
   animal.speak();
}

void test01(){
   Cat cat;
   doSpeak(cat);

   Dog dog;
   doSpeak(dog);
}

int main(){
   test01();
}
