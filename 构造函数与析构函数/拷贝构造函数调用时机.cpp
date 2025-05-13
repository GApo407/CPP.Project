#include <iostream>
using namespace std;

class Person
{
public:
   Person()
   {
      cout << "Person默认构造函数调用" << endl;
   }

   Person(int a)
   {
      age = a;
      cout << "Person有参构造函数调用" << endl;
   }

   Person(const Person &p)
   {
      age = p.age;
      cout << "Person拷贝构造函数调用" << endl;
   };

   ~Person()
   {
      cout << "Person析构函数调用" << endl;
   }

   int age{};
};

// 拷贝构造函数调用时机
// 1.使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
   Person P1(20);
   //Person P2(P1);

   //cout << "P2的年龄为：" << P2.age << endl;
}

// 2.值传递的方式给函数参数传值
void doWork(Person a)
{
}

void test02()
{
   Person p;
   doWork(p); // doWork(Person a(p))  相当与拷贝构造函数写法
}

// 3.值方式返回局部对象
Person doWork02()
{
   Person p1;
   cout << &p1 << endl;
   return p1;
}

void test03()
{
   Person p = doWork02();
   cout << &p << endl;
}

int main()
{
   test01();
   //test02();
   // test03();
   return 0;
}
