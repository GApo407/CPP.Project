#include <iostream>
using namespace std;
// 栈区数据注意事项 ---- 不要返回局部变量的地址
// 栈区的数据有编译器管理开辟和释放

int  func(){
  int a = 10; // 局部变量 存放在栈区，栈区的数据在函数执行完后自动释放
  return a; // 返回局部变量的地址
}
int main(){

  // int * p = func(); // 错误无法返回局部变量
  cout << func() << endl;  // 第一次可以运行是因为编译器做保留的（用法也错误），无法多次使用
  return 0;
}