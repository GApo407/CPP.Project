// 变量 1.变量可以在程序运行过程中，记录数据。
//     2.变量可以被重复使用
#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 1.变量的声明（定义）, 变量类型 , 变量名;
    int age;              // 整形变量声明
    float height;         // 实型变量声明
    char gender;          // 字符型变量声明
    string name;          // 字符串变量声明

    // 2.变量的赋值, 变量名 = 变量值;   =不是数学中等于的意思 是将右侧的值提供给左侧的结果 自右向左的顺序
    age = 9;
    height = 155.9;
    gender = 'm';
    name = "小明";

    // 3. 变量的使用（取值） , 直接使用变量名称即
    // cout << "age = " << age << endl;
    cout << name << "的年纪：" << age << endl;
    cout << name << "的身高：" << height << endl;
    cout << name << "的性别：" << gender << endl;

    return 0;
}