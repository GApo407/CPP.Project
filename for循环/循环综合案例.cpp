
#include "iostream"
#include "random"
#pragma clang diaghostic push
#pragma clang diaghostic ignored "-Wstring-compare"
using namespace std;

/*某公司账户余额有1w元, 给20名员工发工资.
员工编号从1到20, 从编号1开始, 依次领取工资, 每人可以领取1000元
领取工资时, 财务判断员工的绩效分（1-10）（随机生成）, 如果低于5元, 不发工资, 换下一位
如果工资发完了, 结束发工资.

提示:
使用循环对员工依次发工资
continue用于跳过员工, 结束发工资*/


int get_random_num(int min, int max){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    int random_number = dis(gen);
    return random_number;
}
int main()
{
    // 定义工资总数
    int total_salary = 10000;
    int wage = 1000;
    for (int id = 1; id < 21 ; ++id)
    {
        // 随机生成绩效分
        int performance_score = get_random_num(1, 10);
        if (total_salary <= 0)
        {
            cout << "工资发完了, 下个月再领取" << endl;
            break;
        }
        else if (performance_score < 5)
        {
            cout << "员工: " << id << ", 绩效分为" << performance_score << ",低于5, 不发工资, 下一位." << endl;
            continue;
        }
        else
        {
            total_salary -= wage;
            cout << "向员工: " << id << "发放工资1000元, 账户余额还剩" << total_salary << "元" << endl;
        }

    }
    return 0;
}