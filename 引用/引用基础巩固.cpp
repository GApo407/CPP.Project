#include <iostream>
using namespace std;

int main(){
  int a = 10;
  //创建引用
  int &b = a;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  b = 100;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  // 引用必须初始化
  int &c; //错误

  // 引用在初始化后，不可改变
  int d = 20;
  b = d; //这是赋值操作 不是更改引用
  return 0;
}