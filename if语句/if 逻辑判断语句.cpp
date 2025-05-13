#include "iostream"
using namespace std;

int main()
{
    /*
     *   if（判断）
     *   {
     *        code;
     *        code;
     *        code;
     *    }
     */

    cout << "今天发工资了" << endl;
    int money;
    cout << "请输入小明今天发的工资：" << endl;
    cin >> money;

    // 开始逻辑判断
    if (money >= 10000)
    {
        // 满足条件会执行这里面的代码
        cout << "买个新电脑去，花费9900" << endl;
        money -= 9900;
    }

    cout << "小明的工资剩余：" << money << endl;
    return 0;
}