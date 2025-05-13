#include <iostream>
using namespace std;

void showValue(const int &a){
  a = 100; // 错误
  cout << a << endl;
}

int main(){

  // 常量引用
  // 使用场景：用来修饰形参，防止误操作

  int a = 10;
  showValue(a);
  cout << a << endl;
  return 0;
}