#include "iostream"
using namespace std;

int main()
{
    // 单目（只有一个操作符） 操作符：+、-
    int num1 = +10;
    int num2 = -10;
    cout << num1 << "," << num2 << endl;

    // 双目（有2个操作符） 操作符：+、-、*、/、%
    int num3 = 5 + 5;     // + 相加
    int num4 = 5 - 3;     // - 相减
    int num5 = 5 * 5;     // * 相乘
    int num6 = 25 / 5;    // / 相除
    int num7 = 10 % 3;    // % 取余
    cout << "5 + 5 = " << num3 << endl;
    cout << "5 - 3 = " << num4 << endl;
    cout << "5 * 5 = " << num5 << endl;
    cout << "25 / 5 = " << num6 << endl;
    cout << "10 % 3 = " << num7 << endl;

    // 单目操作数  操作数：++(+1)、--(-1)
    int a = 2;    // 前置递增（+1），在赋值语句（=）之前，先执行加1的操作
    int b = ++a;
    cout << "\na = " << a << endl;
    cout << "b = " << b << endl;

    int c = 2;    // 后置递增，在赋值语句“后”，再执行加1的操作
    int d = c++;
    cout << "\nc = " << c << endl;
    cout << "d = " << d << endl;

    int e = 2;
    int f = e++;
    cout << "\ne = " << e << endl;
    cout << "f = " << f << endl;

    int g = 2;
    int h = --g;
    cout << "\ng = " << g << endl;
    cout << "h = " << h << endl;

    int i = 2;
    int j = i--;
    cout << "\ni = " << i << endl;
    cout << "j = " << j << endl;

    return 0;
}