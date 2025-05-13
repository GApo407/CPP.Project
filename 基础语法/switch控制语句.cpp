#include "iostream"
using namespace std;

int main()
{
    // 输入数字1-7,输出星期几
/*    int num;
    cout << "请输入数字来告知是星期几（1-7）: " << endl;
    cin >> num;

    switch (num) {
        case 1:
            cout << "今天星期一" << endl;
            break;
        case 2:
            cout << "今天星期二" << endl;
            break;
        case 3:
            cout << "今天星期三" << endl;
            break;
        case 4:
            cout << "今天星期四" << endl;
            break;
        case 5:
            cout << "今天星期五" << endl;
            break;
        case 6:
            cout << "今天星期六" << endl;
            break;
        default:
            cout << "今天星期日" << endl;
    }
*/
    int num;
    cout << "请给电影打分10和9（优秀）, 8和7（普通）, 6和5（一般） ,低于5（垃圾）: " << endl;
    cin >> num;
    switch (num) {
        case 10:
        case 9:
            cout << "优秀" << endl;
            break;
        case 8:
        case 7:
            cout << "普通" << endl;
            break;
        case 6:
        case 5:
            cout << "一般" << endl;
            break;
        default:
            cout << "垃圾" << endl;
    }
    return 0;
}



