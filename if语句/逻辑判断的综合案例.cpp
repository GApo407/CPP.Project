#include "iostream"
#include "random"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wstring-compare"
using namespace std;
int get_random_num(int min, int max)
{
    // 创建一个随机数生成器
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
    int num = get_random_num(1, 10);
    string color = get_random_num(0, 1)? "红色" : "黑色" ;
    string suit;
    if (color == "红色"){
        suit = get_random_num(0 ,1)? "红桃" : "方块";
    }else{
        suit = get_random_num(0 ,1)? "黑桃" : "梅花";
    }
    cout << num << ":" << color << ":" << suit << endl;

int guess_num;
cout << "请输入猜想的数字: " << endl;
cin >> guess_num;

if (guess_num == num){
    int guess_color;
    cout << "请输入猜想的颜色,1是红色,0是黑色:" << endl;
    cin >> guess_color;
    if ((guess_color?"红色" : "黑色") == color ){
        if ((guess_color? "红色" : "黑色") == "红色"){
            int guess_suit;
            cout << "请输入猜想的花色,1是红桃,0是方块" << endl;
            cin >> guess_suit;
            if ((guess_suit?"红桃":"方块") == suit){
                cout << "恭喜你成功了" << endl;
            }else{
                cout << "花色猜错,游戏结束" << endl;
            }
        }else{
            int guess_suit;
            cout << "请输入猜想的花色,1是黑桃,0是梅花" << endl;
            cin >> guess_suit;
            if ((guess_suit?"黑桃":"梅花") == suit){
                cout << "恭喜你成功了" << endl;
            }else{
                cout << "花色猜错,游戏结束" << endl;
            }
        }
    }else{
        cout << "颜色猜错,游戏结束" << endl;
    }
}else {
    cout << "数字猜错,游戏结束" << endl;
}
    return 0;
}
#pragma clang diagnostic pop