#include <iostream>
using namespace std;

// 函数调用运算符重载

// 打印输出类
class MyPrint
{
public:
   void operator()(string p)
   {
      cout << "p = " << p << endl;
   }
};
// 仿函数非常灵活，没有固定写法
// 加法类
class MyAdd
{
public:
   int operator()(int a, int b)
   {
      return a + b;
   }
};

void MyPrint02(string a)
{
   cout << "a = " << a << endl;
}

void test01()
{
   MyPrint myprint;
   // 由于使用起来非常像函数调用，因此称为 仿函数
   myprint("Hello World");

   MyPrint02("Hello World");
}

void test02()
{
   MyAdd myadd;
   int sum = myadd(100, 100);
   cout << "sum = " << sum << endl;

   // 匿名函数对象
   cout << MyAdd()(100,100);
}

int main()
{
   test01();
   test02();
}
