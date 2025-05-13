#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // short(短整形){字节占用为2}、 int(整型){字节占用为4}  long(长整形){windows和Linux32位字节占用为4  在Linux64位系统里占用字节为8 }  long long(长长整形){字节占用为8}
    short age = 21;
    int num1 = 1;
    long num2 = 2;
    long long num3 = 3;
    cout << age << num1 << num2 << num3 << endl;

    // sizeof()函数, 用法：sizeof(数据), 会告知得到数据所占用的字节
    cout << "short变量，占用字节:" << sizeof(age) << endl;
    cout << "int变量，占用字节:" << sizeof(num1) << endl;
    cout << "long变量，占用字节:" << sizeof(num2) << endl;
    cout << "long long变量，占用字节:" << sizeof(num3) << endl;

    return 0;
}