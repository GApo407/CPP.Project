#include "iostream"
#include "my_func.h"
using namespace std;
/*
 *  C++在很多地方都有 声明 和 实现 2个步骤
 *  变量：
 *        1.声明（分配空间）  int x;     2.实现（设置值）  x = 10;
 *          快捷写法（声明和赋值一起写）  int x = 10;
*
 *  函数:
 *        1.声明 int add(int x, int y);
 *        2.实现 int add(int x, int y){return x + y;}
 */


// 实现
void add(int x, int y)
{
  cout << (x + y) << endl;
}

void add2(int x)
{
  cout << (x + 10);

}