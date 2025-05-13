#include "iostream"
using namespace std;

// continue 跳过本次循环, 进入循环下一次的流程
// break 直接停止所在循环的执行

int main()
{
//    // 通过for循环输出1-20之间的奇数
//    for (int i = 0; i <= 20 ; ++i) {
//        if (i % 2 == 0){
//            continue;  // 跳过本次循环, 进行下一次
//        }
//        cout << i << endl;
//    }

    // 通过for循环输出1-20的数字
//    for (int f = 1; true ; f++) {
//        cout << f << endl;
//        if (f == 20){
//            break;
//        }
//    }

//    int i = 1;
//    while (i <=20){
//        if (i % 2 == 0){
//            i++;
//            continue;
//        }
//        cout << i << endl;
//        i++;
//    }

    for (int num = 1; num <= 5; ++num) {
        int i = 1;
        while (i <= 20) {
            if (i % 2 == 0) {
                i++;
                break;
            }
            cout << i << endl;
            i++;
        }
        }

    return 0;
}