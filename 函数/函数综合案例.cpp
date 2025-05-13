#include "iostream"
using namespace std;
int arr = 5000000;
int arr_money()
{
    return arr;
}
int save_money(int save)
{
    arr += save;
    return arr;
}
int get_money(int get)
{
    arr -= get;
    return arr;
}
void main_menu(string name)
{
    bool a = true;
    int num;
    while (a)
    {
        cout << "--------------主菜单--------------" << endl;
        cout << name << "，您好，欢迎来到银行ATM。请选择操作：" << endl;
        cout << "查询余额\t[输入1]" << endl;
        cout << "存款\t[输入2]" << endl;
        cout << "取款\t[输入3]" << endl;
        cout << "退出\t[输入4]" << endl;
        cout << "请输入您的选择：";
        cin >> num;
        switch (num)
        {
            case 1:
                cout << "--------------查询余额--------------" << endl;
                cout << name << "，您好，您的余额剩余：" << arr_money()  << "元" << endl;
                break;
            case 2:
                cout << "--------------存款--------------" << endl;
                int num2;
                cout << "请输入存款金额：";
                cin >> num2;
                cout << name << "，您好，您的余额剩余：" << save_money(num2) << "元"  << endl;
                break;
            case 3:
                cout << "--------------取款--------------" << endl;
                int num3;
                cout << "请输入取款金额：";
                cin >> num3;
                cout << name << "，您好，您的余额剩余：" << get_money(num3)  << "元" << endl;
                break;
            default:
                cout << "程序退出" << endl;
                a = false;
        }
    }
}
int main()
{
    string name;
    cout << "请输入您的姓名：";
    cin >> name;
    main_menu(name);
    return 0;
}