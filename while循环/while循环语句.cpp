#include "iostream"
using namespace std;

int main()
{
    // 循环控制因子
    /*
    bool is_run = true;
    int num = 0;      // 控制变量
    while (is_run){   // 条件是false就结束循环，true无限循环
        cout << "hello" << endl;
        num ++;
        if (num > 5){
            is_run = false;   // 控制因子的更新
        }
    }
    */

    int day = 1;
    while (day <=10){
        cout << "第" << day << "天" << "小美,我喜欢你" << endl;
        day ++;
    }
    return 0;
}