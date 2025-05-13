#include "iostream"
using namespace std;

void get_flower()
{
    cout << "送玫瑰花" << endl;
}

void get_breakfast()
{
    cout << "送早餐" << endl;
}
void get_movie()
{
    cout << "邀请去看电影" << endl;
}
void say_like()
{
    cout << "小美我喜欢你" << endl;
}
void say_love(int num)
{
    switch (num)
    {
        case 1:
            get_breakfast();
            get_flower();
            say_like();
            break;
        case 2:
            get_flower();
            say_like();
            get_movie();
            break;
        case 3:
            get_movie();
            get_flower();
            say_like();
        default:
            cout << "今天不追求小美了，去打球" << endl;
    }
}
int main()
{
    cout << "今天天气不错，执行方案2" << endl;
    say_love(2);
    return 0;
}