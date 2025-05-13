#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // char类型本质是数字，通过ASCII表进行的映射
    char ch = 65;
    cout << ch << endl;

    char ch2 = 'a';
    cout << ch2 + 1 << endl;

    char ch3 = 'a' +  2;
    cout << ch3 << endl;

    return 0;
}