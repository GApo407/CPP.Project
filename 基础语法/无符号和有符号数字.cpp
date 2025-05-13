#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 有符号：signed（可选） ，  无符号：unsigned（必写）
    signed int num1 = 10;
    int num2 = -10;
    cout <<
    // 无符号的int，short，long的快捷写法
    u_int num5 = 100;     // 等同于 unsigned int
    u_short num6 = 200;   // 等同于 unsigned short
    u_long num7 =1000;    // 等同于 unsigned long
    cout << num5 << "," << num6 << "," << num7 << endl;

    return 0;
}