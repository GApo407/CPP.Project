#include "iostream"
using namespace std;

int main()
{
  int num = 10;
  int * p = &num;
  cout << "指针变量p中记录的地址是:" <<  p << endl;
  p++;
  cout << "指针变量p进行+1操作后，记录的地址是：" << p << "\n" <<endl;
  double num2 = 20;
  double * p2 = &num2;
  cout << "指针变量p2中记录的地址是：" << p2 << endl;
  p2++;
  cout << "指针变量p2进行加1后 记录的地址是：" << p2 << endl;

  int v[] = {1,2,3};
  int * vp = v;

  cout << "数组的第一个元素是：" << *vp << endl;
  cout << "数组的第一个元素是：" << v[0] << endl;

  cout << "数组的第一个元素是：" << *(vp+1) << endl;
  cout << "数组的第一个元素是：" << v[1] << endl;

  *(vp+2) = 33;
  cout << "数组的第一个元素是：" << *(vp+2) << endl;
  cout << "数组的第一个元素是：" << v[2] << endl;
  return 0;
}