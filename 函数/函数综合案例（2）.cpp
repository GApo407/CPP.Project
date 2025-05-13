#include "iostream"
using namespace std;
void check_balance (const string * const name , const int * arr_money )
{
    cout << "--------------------查询余额--------------------" << endl;
    cout << *name << "，您好，您的余额剩余：" << *arr_money << "元" << endl;
}
void save_monary (const string * const name , const int * save_num, int * arr_money )
{
    cout << "--------------------存款--------------------" << endl;
    *arr_money += *save_num;
    cout << *name << "您好，您存款" << *save_num << "元成功" << endl;
    cout << *name << "，您好，您的余额剩余：" << *arr_money << "元" << endl;
}
void get_monary (const string * const name , const int * get_num, int * arr_monary )
{
    cout << "--------------------取款--------------------" << endl;
    *arr_monary -= *get_num;
    cout << *name << "您好，您取款" << *get_num << "元成功" << endl;
    cout << *name << "，您好，您的余额剩余：" << *arr_monary << "元" << endl;
}
int main()
{
    string name;
    cout << "请输入您的姓名：";
    cin >> name;
    int arr;
    cout << "请输入您的余额：";
    cin >> arr;
    bool a = true;
    while(a)
    {
        int num;
        cout << "--------------主菜单--------------" << endl;
        cout << name << "，您好，欢迎来到银行ATM。请选择操作：" << endl;
        cout << "查询余额\t[输入1]" << endl;
        cout << "存款\t[输入2]" << endl;
        cout << "取款\t[输入3]" << endl;
        cout << "退出\t[输入4]" << endl;
        cout << "请输入您的选择：";
        cin >> num;
        switch(num)
        {
            case 1:
                check_balance(&name, &arr);
                break;
            case 2:
                int save;
                cout << "您需要存款多少元：";
                cin >> save;
                save_monary(&name, &save , &arr);
                break;
            case 3:
                int get;
                cout << "您需要取款多少元：";
                cin >> get;
                get_monary(&name, &get, &arr);
                break;
            default:
                a = false;
        }
    }
    return 0;
}