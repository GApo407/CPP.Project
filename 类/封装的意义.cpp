#include <iostream>
using namespace std;

// 设计一个圆类，求周的周长
// 公式： 2 * pai * 半径

const double pai = 3.14;
// class 代表设计一个类，类后面跟类的名称
class yuan{
  // 访问权限
  public:
  // 属性
  // 半径
    int radius{};
  // 行为
  // 获取圆的周长
    void round(){
      double rou = 2 * radius * pai;
      cout << "圆的周长为：" << rou << endl;
    }
};
int main(){
  // 通过圆类 创建具体的圆（对象）
  // 实例化 （通过一个类 创建一个对象的过程）
  yuan a;

  // 两种对属性的赋值方式
  a = {10};
  a.radius = 10;

  a.round();
  return 0;
}