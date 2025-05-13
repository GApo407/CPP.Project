#include "iostream"
using namespace std;

int main()
{
    // ！非   bool:true 1 真,   false 0 假
    bool a = !(1==1);
    cout << a << endl;

    // && 与，两个条件都要同时为true（真），结果为真，否则只要有一个为假，结果就为假
    bool b = 1==1 && 2==2;
    bool c = 1==1 && 1==2;
    cout << b << endl;
    cout << c << endl;

    // ||  或，只要有1个为真，结果就为真
    bool d = 1==1 || 1==2;
    bool e = 1==2 || 1==2;
    cout << d << endl;
    cout << e << endl;


    return 0;
}