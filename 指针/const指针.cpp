#include "iostream"
using namespace std;
/*
const表示常量（不可变） 通俗点就是指针常量
const后面跟什么什么就不可以变
1.指向常量的指针                指向可变，数据不可变
   格式：  const int * p；
2.常量指针                     指向不可变，数据可变
   格式： int * const p = 地址  必须提供初始化指针
3.指向常量的常量指针                  指向不可变，数据不可变
   格式：  const int const p = 地址  必须提供初始化指针
 */
int main()
{
  int num1 = 10, num2 = 20;
    // 1.指向const的指向，指向可变， 数据不可变
  const int * p1 = &num1;
  cout << "指针p1当前指向的数据是：" << *p1 << endl;
  p1 = &num2; // 指针指向可变
  // *p1 = 20;  数据不可变
  cout << "指针p1当前指向的数据是：" << *p1 << endl;

    // 2.const指针， 指向不可变， 数据可变
  int * const p2 = &num1;
  cout << "指针p2当前指向的数据是：" << *p2 << endl;
  *p2 = 15;
  // p2 = &num2; 指针不可变
  cout << "指针p2当前指向的数据是：" << *p2 << endl;

    //指向const的const指针， 指向不可变，数据不可变
  const int * const p3 = &num1;
  // *p3 = 12; 数据不可变
  // p3 = &num2;  指向不可变
  cout << "指针p3当前指向的数据是：" << *p3 << endl;
  return 0;
}