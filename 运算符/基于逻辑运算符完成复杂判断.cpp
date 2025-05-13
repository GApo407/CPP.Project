#include "iostream"
using namespace std;

int main()
{
    // !
    int num = 1;
    if (!num){
        cout << "if被执行" << endl;
    }else
        cout << "else被执行" << endl;

    // &&
    int age, height;
    cout << "请输入你的年龄: " << endl;
    cin >> age;
    cout << "请输入你的身高(cm): " << endl;
    cin >> height;
    // 必须同时满足年龄小于18,身高低于160cm
    if (age < 18 && height < 160){
        cout << "满足条件" << endl;
    }else{
        cout << "不满足条件" << endl;
    }

    // ||
    int age_1, height_1;
    cout << "请输入你的年龄: " << endl;
    cin >> age_1;
    cout << "请输入你的身高(cm): " << endl;
    cin >> height_1;
    // 只需满足年龄小于18或身高低于160cm即可
    if (age_1 < 18 || height_1 < 160){
        cout << "条件满足" << endl;
    }else{
        cout << "不满足条件" << endl;
    }
    return 0;
}