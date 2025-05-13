#include <iostream>
using namespace std;

// 函数重载的注意事项
// 1.引用作为重载的条件
void func(int &a){
  cout << "fun(int &a)" << endl;
}
void func(const int &a){   // 传入值需要为常量
  cout << "fun(const int &a)" << endl;
}

// 2. 函数重载遇到默认函数
void func2(int a,int b = 10) {
  cout << "fun2(int a, int b =10)" << endl;
}

void func2(int a){
  cout << "fun2(int a)" << endl;
}
int main(){
  int a = 10;
  func(a);
  func(10);

  func2(10); // 当函数重载遇到默认参数，出现二义性，报错，尽量避免这种情况
  return 0;
}