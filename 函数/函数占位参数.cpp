#include <iostream>
using namespace std;

// 占位参数
// 占位参数类型  函数名（数据类型）{}
void func(int a,int){
  cout << "this is func" << endl;
}

int main(){
  func(10,10); // 占位参数必须填补
  return 0;
}