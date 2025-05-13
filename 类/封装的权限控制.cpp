#include <iostream>
using namespace std;

// 访问权限
// 三种
// 公共权限 public     成员 类内可以访问 类外也可以访问
// 保护权限 protected  成员 类内可以访问 类外不可访问
// 私有权限 private    成员 类内可以访问 类外不可访问
class Person {
  // 公共权限
public:
  string name;  // 姓名 公共权限
  // 保护权限
protected:
  string cat = "拖拉机"; // 汽车 保护权限
  // 私有权限
private:
  int num = 123;  // 银行卡密码 私有权限

  // 类内可以访问
private:
  void add() {
    cout << name << endl;
    cout << cat << endl;
    cout << num << endl;
  }
};

int main() {
  Person p1;
  p1.name = "大黄";
  p1.cat == "奔驰"; // 保护权限内容，类外无法访问
  p1.num = 456; // 私有权限内容，类外无法访问
  return 0;
}
