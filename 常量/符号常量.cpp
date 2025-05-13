// 符号常量  1.使用标识符命名的常量
//          2.可基于其标识符（名称）重复使用常量值无需再次书写
#include "iostream"
// #include "windows.h" // 方式一 第一步
using namespace std;
#define J2C_RETE 9.9 //  焦耳转卡路里的比率
#define FAT_BMI 9 //  符号常量 ： #define 名称（标识符） 常量值    符号常量定义在代码头部 尾部不需要;结尾
/* 中文编码输出问题：
 方式一 ：引入windows.h库（两步）
 方式二 ：system("chcp 65001") {一步}
*/
int main()
{
   // SetConsoleOutputCP(CP_UTF8); // 设置控制输出的字符编码  方式一第二步
   system("chcp 65001");
   cout << FAT_BMI << endl;
   cout << "焦耳转卡路里需要除以：" << J2C_RETE << endl;
   return 0;
}
