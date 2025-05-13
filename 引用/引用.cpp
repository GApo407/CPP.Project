  #include "iostream"
using namespace std;
/*
 *  数据类型& 引用名 = 被引用变量（必须初始化， 且不可为空， 初始化后不可更改指向，可以更改内存内的数据）
 *
 *  对引用的操作等同于被引用变量
*   引用的本质 就是一个指针常量
 */
int main()
{
    int a = 5;
    int& b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int num1 = 55;
    int& num2 = num1;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    double c = 555.55;
    double& d = c;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    return 0;
}