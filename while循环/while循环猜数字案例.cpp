#include "iostream"
#include "random"
using namespace std;
int get_random_num(int min, int max){
    // 创建一个数字生成器
    random_device rd;
    mt19937 gen(rd());
    // 定义一个均匀分布的整数范围
    uniform_int_distribution<> dis(min, max);
    // 生成一个随机数并输出
    int random_number = dis(gen);
    return random_number;
}
int main()
{
    // 获取一个1到100之间的随机数
    int num = get_random_num(1,100);
    // 定义用户猜测的数字变量
    int guess_num;
    // 初始化猜测次数为1
    int change = 1;
    // 输出正确的数字（调试用）
    cout << "正确的数字为: " << num << endl;
    // 提示用户输入猜测的数字

    cout << "请输入猜想的数字:" << endl;
    // 读取用户输入的猜测数字
    cin >> guess_num;
    // 当用户猜错时，进入循环
    while (guess_num != num){
        // 增加猜测次数
        change ++;
        // 如果猜测的数字大于正确数字
        if (guess_num > num){
            // 提示用户猜大了
            cout << "猜大了,请再猜一遍" << endl;
            // 再次读取用户输入的猜测数字
            cin >> guess_num;
        }else{
            // 如果猜测的数字小于正确数字
            // 提示用户猜小了
            cout << "猜小了,请再猜一遍" << endl;
            // 再次读取用户输入的猜测数字
            cin >> guess_num;
        }
    }
    // 用户猜对后，输出恭喜信息
    cout << "恭喜您猜对了" << endl;
    // 输出用户总共猜测的次数
    cout << "您一共猜了" << change << "次" << endl;

    // 返回0表示程序正常结束
    return 0;
}