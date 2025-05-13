#include "iostream"
using namespace std;

int * num(int a, int b)
{
  int * sum = new int ; // 需要使用动态内存管理进行指针返回
  *sum = a + b;

  return sum;
}
























int main()
{
  int * sum = num(7,2);
   cout << * sum << endl;
    delete sum;
    return 0;
}