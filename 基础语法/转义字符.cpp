#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 转义字符：将普通的字符使用\作为开头，将其含义进行转换，对应得到ASCII表的控制字符的功能
    // \n 换行 \t制表符  \\表示一个反斜杠本身  \‘表示单引号  \“表示双引号
    cout << " hello \n world " << endl;

    // \t制表符演示，效果等同于tap键，一个\t可以补充到8个字符位
    cout << "hello \tworld" << endl;
    cout << "A \tcat" << endl;

    // \\等于\本身
    cout << "\\" << endl;

    // \'等于单引号
    cout << "\'" << endl;

    // \"等于双引号
    cout << "\"" << endl;


    return 0;
}