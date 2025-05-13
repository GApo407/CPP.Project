#include <iostream>
using namespace std;

int * func(){
  // 利用new关键字 可以将数据开辟到堆区
  // 指针 本质也是局部变量，放在栈上，new指针保存的数据是放在堆区
  // 堆区数据利用new关键字进行开辟内存
  int * a = new int;
  * a = 10;
  return a;
}

int main(){
  int *p = func();
  cout << *p<< endl;
  delete p;
  return 0;
}