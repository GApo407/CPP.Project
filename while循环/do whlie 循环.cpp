#include "iostream"
#include "random"
using namespace std;
int get_random_num(int min, int max) {
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
    int num = get_random_num(1, 100);
    int guess_num;
    cout << num << endl;
    do {
        cout << "请输入一个猜想的数字: " << endl;
        cin >> guess_num;
        if (guess_num > num){
            cout << "猜大了,请再猜一次" << endl;
        }else if (guess_num < num){
            cout << "猜小了,请再猜一次" << endl;
        }else {
            cout << "猜对了" << endl;
        }
    } while (guess_num != num);

    return 0;
}