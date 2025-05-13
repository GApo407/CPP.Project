#include "iostream"
using namespace std;

int main(){
    // 基础for循环 打印1-10的数字
/*    for (int num = 1; num < 11; num++){
        cout << num << endl;
    }*/

    // 打印 1-20之间的奇数
/*    for (int i = 1; i <21; i+=2){
        cout << i << endl;
    }*/

    // for循环()内的三个部分,可以按照需求省略
    // 条件判断可以省略(不建议这么做)
/*    for (int num = 1; ; num++){
        cout << num << endl;
    }*/

    // 循环控制因子的创建可以省略
    // 尽管可以省略,但一般离不开循环控制因子,无需省略
/*    int num = 0;
    for (; num < 100 ; ++num) {
        cout << num << endl;
    }*/

    // 循环控制因子的更新也可以省略
    // 不建议省略
    /*
    for (int num = 1; num < 100 ; ) {
        cout << num << endl;
    }*/
    return 0;
}