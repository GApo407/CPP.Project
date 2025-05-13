#include "iostream"
using namespace std;

int main()
{
  // 不要轻易进行指针之间的赋值
  // 一旦用delete,确保真的这个内存区域没人使用

  int * p1 = new int;
  *p1 = 10;
  int * p2 = p1;   // 指针之间互相赋值

  cout << "p1指针指向的内存区域的值是：" << *p1 << endl;
  delete p1;
  cout << "p2指针指向的内存区域的值是：" << *p2 << endl;
  return 0;
}