#include "iostream"
using namespace std;

int main()
{
    // 外层循环，控制行数，从1到9
    for (int line = 1; line < 10; line++){
        // 内层循环，控制列数，从1到当前行号
        for (int col = 1; col <= line; col++)
            // 输出乘法表的每一项，格式为：行号*列号=结果，并用制表符分隔
            cout << line << "*" << col << "=" << col * line << "\t";
    // 输出换行符，开始新的一行
    cout << endl;
    }
    // 返回0，表示程序正常结束
    return 0;
}