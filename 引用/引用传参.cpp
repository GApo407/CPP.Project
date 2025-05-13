#include "iostream"
using namespace std;

// 如果函数作为左值 必须使用引用返回  num3() = 1000;
// 值传递 (不能对实参进行修改，也不能对内存操作)
void num1(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

// 地址传递（可以对实参进行更改，内存操作同理）
void num2(int * a, int * b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// 引用传递（可以对实参进行修改，不能对内存进行操作）
void num3(int & a, int & b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int i = 9;
    int f = 1;
    num1(i,1);
    cout << "i = " << i << endl;
    cout << "f = " << f << endl;
    cout << endl;

    num2(&i,&f);
    cout << "i = " << i << endl;
    cout << "f = " << f << endl;
    cout << endl;

    num3(i,f);
    cout << "i = " << i << endl;
    cout << "f = " << f << endl;

    // 引用相当于 int * const 别名 = &变量
    return 0;
}