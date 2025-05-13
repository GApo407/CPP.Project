#include "iostream"
using namespace std;

int main()
{
    // +=、-=、*=、/=、%=
    // +=  将变量本身进行加法操作，将结果再次赋予变量本身
    int num = 2;
    num = num + 3;
    cout << num << endl;

    num += 3;  // 等同于 num = num + 3
    cout << num << endl;

    // -=  将变量本身进行减法操作，将结果再次赋予变量本身
    num -= 3;  // 等同于 num = num - 3
    cout << num <<endl;

    // *=  将变量本身进行乘法操作，将结果再次赋予变量本身
    num *= 5;  // 等同于 num = num * 3
    cout << num <<endl;

    // /=  将变量本身进行除法操作，将结果再次赋予变量本身
    num /= 5;  // 等同于 num = num / 3
    cout << num <<endl;

    // %=  将变量本身进行取余操作，将结果再次赋予变量本身
    num %= 2;  // 等同于 num = num % 3
    cout << num <<endl;


    return 0;
}