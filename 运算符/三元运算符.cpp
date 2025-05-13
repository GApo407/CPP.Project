#include "iostream"
using namespace std;

int main()
{
    // 表达式? v1 : v2;
    int num1, num2;
    cout << "请输入num1的值：" << endl;
    cin >> num1;
    cout << "请输入num2的值：" << endl;
    cin >> num2;
    string a = num1 > num2 ? "num1大于num2" : "num1小于num2";
    cout << a << endl;

    return 0;
}