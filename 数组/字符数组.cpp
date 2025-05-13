#include "iostream"
using namespace std;

int main()
{
    "hello";  // 底层就是字符数组
    char i[] = "hello";  // 底层也是字符数组,会额外添加一个\0作为最后一个元素,当作结束标记

    cout << i[0] << endl;
    cout << i[1] << endl;
    cout << i[2] << endl;
    cout << i[3] << endl;
    cout << i[4] << endl;
    cout << i[5] << endl;

    cout << sizeof(i) << endl;

    for (char o : i) {
        cout << o;
    }

    return 0;
}