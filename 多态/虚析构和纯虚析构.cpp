#include <iostream>
#include <string>
using namespace std;

// 虚析构和纯虚析构

class Animal{
public:
   Animal(){
      cout << "Animal 构造函数调用" << endl;
   }

   // 纯虚函数
   virtual void speak() = 0;

   // 利用虚析构函数可以解决，父类指针释放子类对象时不干净的问题
   // virtual ~Animal(){
   //    cout << "Animal 构造函数调用" << endl;
   // }

   // 纯虚析构函数  需要声明
   // 有了纯虚析构之后， 这个类也属于抽象类，无法实例化对象
   virtual ~Animal() = 0;
};

// 纯析构函数实现
Animal::~Animal(){
   cout << "Animal的纯析构调用" << endl;
}

class Cat : public Animal{
public:
   explicit Cat(string name){
      cout << "Cat的构造函数调用" << endl;
      m_Name = new string(std::move(name));
   }

   void speak() override{
      cout << *m_Name << "小猫在讲话" << endl;
   }

   ~Cat(){
      if (m_Name != nullptr){
         cout << "Cat的析构函数调用" << endl;
         delete m_Name;
         m_Name = nullptr;
      }
   }

   string *m_Name;
};

void test01(){
   Animal *animal = new Cat("Tom");
   animal->speak();
   delete animal;
}

int main(){
   test01();
   return 0;
}
