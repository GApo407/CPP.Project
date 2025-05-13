#include "iostream"
#include "random"
using namespace std;

int get_random_num(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    int random_number = dis(gen);
    return random_number;
}

int main() {
    bool love = true;
    while (love) {
        cout << "新的一天,向小美表白" << endl;
        // 每一天表白的流程 每一次都送三朵玫瑰花
        int i = 0; // 内嵌循环控制因子
        while (i < 3) {
            cout << "送出一朵玫瑰花" << endl;
            i++;
        }
        cout << "小美我喜欢你" << endl;
        int guess_num = get_random_num(1, 20);
        if (guess_num == 1) {
            cout << "我成功了" << endl;
            love = false;
        }
        cout << endl;
    }

    return 0;
}
