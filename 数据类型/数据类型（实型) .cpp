#include "iostream"
#include "windows.h"
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    // float单精度浮点数，4字节，6~7位的有效位数
    // 有效位数：整数位，小数点，小数位
    float num1 = 123456789;         // 只提供前7位的准确输出
    float num2 = 1.23456789;        // 只提供7位的准确输出

    cout << fixed;                  // 设置为小数显示
    cout.width(20);            // 设置显示的最大宽度（最大位数）
    cout << num1 << endl;
    cout << num2 << "  字节数为：" << sizeof(num2) << endl;

    // double双精度浮点数 8字节 15~16有效位
    double num3 = 1234567890.1234567890;
    cout << num3 << "  字节数为：" << sizeof(num3) << endl;

    // long double长精度（多精度）浮点数，16字节，18~19有效位数(参考)
    long double num4 = 1234567890.1234567890;
    cout << num4 << "  字节数为：" << sizeof(num4) << endl;

    return 0;
}