#include "iostream"
using namespace std;

/*
 * 函数返回数组，就是返回指针，需注意：
 * - 不可返回局部数组（在函数中创建的数组），如果要返回需要
 *       - static修饰
 *       - 动态内存创建（new[] , delete[]）
 *       - 返回全局I（在函数外创建的对象）
 *
 * 不推荐函数数组返回，因为要么手动delete，要么static一直占用内存，要么全局变量
 * 推荐，在函数外创建号数组，传入函数（地址传递或引用传递）进行操作即可
 *
 */
int * fun1(){   // 局部变量
  int arr[] = {0,1,2,3,4};
  return arr;
}

int * fun2() {  // static修饰变量
  static int arr[] = {0,1,2,3,4};
  return arr;
}

int * fun3() {  // 使用动态内存管理
  int * arr = new int[]{0,1,2,3,4};
  return arr;
}

int arr2[] = {0,1,2,3,4};  // 全局变量 不推荐使用
int * fun4() {
  return arr2;
}
int main()
{
  int * arr = fun3();
  for(int i = 0; i < 5; i++) {
    cout << arr[i] << endl;
  }
  delete[] arr;
  return 0;
}