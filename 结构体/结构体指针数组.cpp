#include "iostream"
using namespace std;

int main()
{
  struct Student
  {
    string name;
    int age = 18;
    string gender = "男";
  };
  struct Student arr[3] = {{"小黄"},{"大黄"},{"中黄"}};
  struct Student * p = arr;  // 数组的对象本质上就是地址（指向数组的第一个元素的内存地址）
  cout << "数组中第一个元素中记录的名字是：" << p[0].name << endl;
  cout << "数组中第二个元素中记录的名字是：" << p[1].name << endl;
  cout << "数组中第三个元素中记录的名字是：" << p[2].name << endl;
  cout << endl;

  // 通过new操作符，自行申请结构体数组的空间（可以通过delete回收）
  struct Student * p2 = new Student[3]{{"中黄"},{"小黄"},{"大黄"}};
  cout << "数组2中第一个元素中记录的名字是：" << p2[0].name << endl;
  cout << "数组2中第二个元素中记录的名字是：" << p2[1].name << endl;
  cout << "数组2中第三个元素中记录的名字是：" << p2[2].name << endl;
  delete[] p2;
  return 0;
}