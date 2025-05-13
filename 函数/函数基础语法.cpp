#include "iostream"
using namespace std;
/*
 * 返回值类型 函数名（参数1类型，参数2类型，参数3类型）
 * {
 *     函数体；
 *
 *     return 返回值；
 * }
 *
 *  // 需求： 编写一个函数，接受2个int数组传入，返回两者中的最大值
 */
int get_num(int a, int b)
{
  // 函数体 （干活的代码）
  int max = a;  // 标记最大值
  if (b > a)
  {
    max = b;
  }
  // 对外提供结果 （最大值 max变量的内容）
  return max;
}
int main()
{
  // 函数的使用在main函数内编写
  // 调用函数：函数名称（传入内容）
  int max = get_num(8,19);
  cout << "max的最大值为:" << max << endl;

  int max2 = get_num(109, 99);
  cout << "max2的最大值为:" << max2 << endl;
  return 0;
}