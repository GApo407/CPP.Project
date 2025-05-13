#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // cin >> 变量；
    cout << fixed;
    int num;
    cout << "请输入一个整数：" << endl;
    cin >> num;

    double num1;
    cout << "请输入一个实型数字：" << endl;
    cin >> num1;

    char num2;
    cout << "请输入一个字符：" << endl;
    cin >> num2;

    string num3;
    cout << "请输入一个字符串：" << endl;
    cin >> num3;

    cout << "输入的整数值为：" << num << endl;
    cout << "输入的实型值为：" << num1 << endl;
    cout << "输入的字符为：" << num2 << endl;
    cout << "输入的字符串值为：" << num3 << endl;

    /* cin中文输出乱码问题解决
       Ctrl + Shift + Alt + /  ——  注册表  ——  run...pty 取消勾选
     勾选后可以取消 #windows.h    SetConsoleOutputCP(CP_UTF8); 的输入
     */

    string a;
    cin >> a;
    cout << a << endl;



    return 0;
}