#include  "iostream"
using namespace std;

int  main()
{
  struct Student
  {
    string name;
    int age;
    string gender;
  };
  struct Student arr[3];
  arr[0] = { " 小黄", 18, "男"};
  arr[1] = { " 大黄", 18, "女"};
  arr[2] = { " 中黄", 18, "男"};
  for(int i = 0; i  < 3; i++)
  {
    cout << "结构体" << i << "号下标" << i << "姓名：" << arr[i].name << endl;
    cout << "结构体" << i + 1 <<"号下标" << i << "姓名：" << arr[i].age << endl;
    cout << "结构体" << i +2 << "号下标" << i << "姓名：" << arr[i].gender << endl;
    cout << endl;
  }

  struct Student arr2[2] = {{"小黄", 16, "男"},{"大黄", 18, "女"}};
  for (int i = 0; i < 2; i++)
  {
    cout << "结构体2," << i << "号下标" << i << "姓名：" << arr2[i].gender << endl;
    cout << "结构体2," << i + 1 << "号下标" << i << "姓名：" << arr2[i].gender << endl;
    cout << endl;
  }
    return 0;
}