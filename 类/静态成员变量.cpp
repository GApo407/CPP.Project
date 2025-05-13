#include <iostream>
using namespace std;

// 静态成员变量
class Person
{
public:
   // 1.所有对象都共享一份数据
   // 2.编译阶段就分配内存
   // 3.类内声明，类外初始化操作
   static int num;

   // 静态成员变量也有访问权限
private:
   static int num2;
};

int Person::num = 100;
int Person::num2 = 200;

// void test01()
// {
//    Person p;
//    cout << p.num << endl;
//
//    Person p2;
//    p2.num = 200;
//    cout << p.num << endl;
// }
void test02()
{
   // 静态成员变量 不属于某个对象上，所有对象都共享同一份数据
   // 因此静态成员变量有两种访问方式

   // 1. 通过对象进行访问
   Person p;
   cout << p.num << endl;
   // 2. 通过对类名进行访问
   cout << Person::num << endl;

   // cout << Person::num2 << endl; 类外无法访问到私有的静态成员变量
}
int main()
{
   // test01();
   test02();
   return 0;
}
