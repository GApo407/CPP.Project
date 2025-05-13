#include "iostream"
using namespace std;


// 主函数
int main()
{
    /*
     *  如果小美喜欢我，我就去表白
     *         如果天气好,去踏青
     *         否则，去看电影
     *  否则我去追小新
     */

    // 定义变量love，表示小美对我的态度
    int love;
    // 定义变量weather，表示天气情况
    int weather;

    // 提示用户输入小美对我的态度
    cout << "小美对我的态度怎么样,1是喜欢,0是不喜欢：" << endl;
    cin >> love;

    // 判断小美是否喜欢我
    if (love) {
        // 提示用户输入天气情况
        cout << "天气怎么样,天气好扣1,天气不好扣0" << endl;
        cin >> weather;

        // 根据天气情况决定活动
        if (weather) {
            // 天气好，去踏青
            cout << "天气好,去踏青" << endl;
        } else {
            // 天气不好，去看电影
            cout << "天气不好,去看电影" << endl;
        }
    } else {
        // 小美不喜欢我，我去追小新
        cout << "我去追小新 " << endl;
    }

    // 程序正常结束
    return 0;
}
