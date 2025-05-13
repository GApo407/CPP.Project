#include "iostream"
using namespace std;
/* 声明语法:
 *     struct 结构体类型名
 *     {
 *          成员类型 成员名；
 *           ...
 *           ...
 *      }
 *   特点：一个结构体类型，可包含多个成员（类似数组元素），每一个成员类型不限
 *         可以做到一批不同类型的数据，混装在一个结构体内
 */
int main()
{
  struct Student  // 一种新的数据类型（由用户自行创建）
  {
    string name;    // 成员1 表明姓名
    int age{};      // 成员2 表明年龄
    string gender;  // 成员3 表明性别
  };
  // 构建体变量的声明，可以在前面带上struct关键字（可省略）
  //  建议写上，可以清晰的知道变量是自定义结构体类型
  struct Student stu;
  stu = {"小明", 18, "男"};

  // 访问结构体需要访问它的每一个成员进行输出  访问语法：结构体变量.成员名称 （结构体变量是一个整体的包装，无法直接cout输出）
  cout << stu.name << endl;
  cout << stu.age << endl;
  cout << stu.gender << endl;
  cout << endl;

  struct Student stu2 = {"小黄" ,19, "男"};
  cout << stu2.name << endl;
  cout << stu2.age << endl;
  cout << stu2.gender << endl;
  return 0;
}