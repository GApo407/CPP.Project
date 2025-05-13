#include "iostream"
using namespace std;
/*
 * static是一个关键字，可以修饰变量和函数
 * - 修饰变量，可以让被修饰的变量的生命周期一直持续到程序结束，不受函数结束的影响
 * 在内存占用较小时可以使用static函数，在内存占用较大的数据使用动态内存管理
 */

int * add(int a, int b)
    {
  static int sum;
  sum = a + b;
  return &sum;
    }
int main()
{
  int * c = add(1,2);
  cout << * c << endl;
  return 0;
}