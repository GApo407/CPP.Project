#include "iostream"
using namespace std;

void say_hello(string name)
{
    cout << name << "，你好，我是黑马程序员" << endl;
}
int main()
{
    say_hello("小黄");
    say_hello("大黄");
    return 0;
}