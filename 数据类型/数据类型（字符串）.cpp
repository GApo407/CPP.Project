#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // c语言风格的字符串
    char s1[] = "itheima";       // 字符数组的形式(不可直接更改变量值)
    char *s2 = "itcast";         // 指针形式的字符串

    // c++语言风格的字符串
    string s3 = "c++ string";    // c++ string类型的字符串

//  s1 = "777";
    s2 = "888";
    s3 = "999";

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;


    return 0 ;
}