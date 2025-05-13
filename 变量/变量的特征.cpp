// 变量的特征：1.变量存储的数据,是可以发生改变的。
//           2.再次执行赋值语句。即可改变记录值
#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int bmi;      // 声明
    bmi = 30;     // 赋值
    cout << "小明现在的BMI值是(10月)：" << bmi << endl;

    // 再一次使用赋值语句，就可以修改变量内记录的值
    bmi = 26;
    cout << "小明现在的BMI值是（11月）：" << bmi << endl;

    // 进行数学计算，可以用：+(加)、-（减)、*（乘）、/（除）
    bmi = bmi - 2;  // 赋值语句的执行逻辑是：先计算等号右侧得到结果，再将结果赋值给等号左侧
    cout << "小明现在的BMI值是（经过11月的努力 BMI减少了2点）：" << bmi << endl;
    return 0;
}