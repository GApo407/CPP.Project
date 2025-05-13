#include "iostream"
using namespace std;
/*
 *  编写函数的适合，可以给参数提供默认值
 *  一旦为某个参数提供默认值， 其右侧全部参数，必须提供默认值
 */
void num(const string &name = "小黄")
{
  cout << name << endl;
}
void arr(int a, int b = 2, int c = 3)
{
  int sum = a + b + c;
  cout << sum << endl;
}
int main()
{
  num();
  num("大黄");

  arr(1);
  arr(1,3);
  arr(1,5,6);
  return 0;
}