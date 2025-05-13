#include <iostream>
using namespace std;

// 继承中的对象模型
class Base{
public:
   int m_A{};

protected:
   int m_B{};

private:
   int m_C{};
};

class Son : public Base{
public:
   int m_D{};
};

// 仅适用 visual studio IDE 编译器
// 利用开发人员命令提示工具查看对象模型
// 跳转盘符 文件所在盘
// 跳转文件路径 cd 具体路径下
// 查看命名
// c1 /d1 reportSingleClassLayout类名 文件名

void test01(){
   // 父类中所以非静态成员属性都会被子类继承下去
   // 父类中私有成员属性 是被编译器隐藏了，因此无法访问，但子类继承了私有成员
   cout << "size of Son = " << sizeof(Son) << endl;
}

int main(){
   test01();
}

