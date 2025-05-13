#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    string name = "小黑";
    string major = "物理";
    int age = 18;
    double height = 180.10;
    // to_string()函数，可以将内容转换为字符串类型，用法：to_string(内容);

    string msg = "我叫" + name + "\n我的专业是：" + major + "\n我的年龄是：" + to_string(age) + "\n我的身高是：" + to_string(height);

    cout << msg << endl;

    return 0;
}