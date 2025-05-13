#include <iostream>
using namespace std;

// 交换函数
// 值传递
void mySwap01(int a, int b){
  int temp = a;
  a = b;
  b = temp;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
}

// 地址传递
void mySwap02(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;;
  cout << "a = " << *a << endl;
  cout << "b = " << *b << endl;
}

// 引用传递
void mySwap03(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
}
int main(){
  int a = 10;
  int b = 20;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  mySwap01(a,b);
  mySwap02(&a,&b);
  mySwap03(a,b);
  return 0;
}