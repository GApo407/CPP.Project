#include <iostream>
using namespace std;

// 深拷贝与浅拷贝
class Person
{
public:
   Person()
   {
      cout << "Person的默认构造函数调用" << endl;
   }

   Person(int a, int b)
   {
      age = a;
      height = new int(b);
      cout << "Person的有参构造函数调用" << endl;
   }
   Person(const Person &a)
   {
      age = a.age;
      height = new int (*a.height);
   }
   ~Person()
   {
      // 析构函数，将堆区开辟数据做释放操作
      if (height != nullptr)
      {
         delete height;
         height = nullptr;
      }
      cout << "Person的析构函数函数调用" << endl;
   }

   int age{};
   int *height{};
};

void test01()
{
   Person p1(10,180);

   cout << "p1的年龄为：" << p1.age << " p1的身高为：" << *p1.height << endl;

   Person p2(p1);

   cout << "p2的年龄为：" << p2.age << " p2的身高为：" << *p2.height << endl;
}

int main()
{
   test01();
   return 0;
}
