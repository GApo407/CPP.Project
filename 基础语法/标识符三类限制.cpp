#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 内容限定：标识符由数字、 字母、 下划线组成、 数字不可开头
//     int 1num = 10;
//     int num-1 = 10;
//     int num*1 = 10;

    // 大小写敏感
//     int Int = 10;
       int num = 10;
       int Num = 20;
       cout << num << "," << Num << endl;

       // 关键字不可占用
       int int = 10;
    return 0;
}