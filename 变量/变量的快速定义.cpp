// 变量的应用有多种快捷形式 1.声明和赋值同步； int num = 10
//                      2.一次性声明多个变量（同步也可以赋值） int a = 1, b = 1, c = 1;
#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    // 快捷形式1:声明变量的同时进行赋值。 变量类型 变量名 = 变量值;
    int age = 18;
    string name = "小明";
    cout << "我叫做：" << name << "，今年:" << age << "岁" << endl;

    // 快捷形式2:一次性定义（声明）多个变量。  变量类型 变量名,变量名, ...;
    int a, b, c;   // 一次性声明了3个int变量
    a = 1;
    b = 2;
    c = 3;
    cout << a << b << c << endl;

    // 快捷形式3：一次性声明（定义）多个变量的同时进行赋值。
    int d = 1, e = 2, f = 3;
    cout << d << e << f << endl;
    return 0;
}