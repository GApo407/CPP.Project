#include "iostream"
using namespace std;

/*
 * 数据类型 数组名[数组长度]
 *
 * 数组名[下标索引], 访问数组元素
 */

int main()
{
    // 将 11, 22, 33, 44, 55存入数组中
    int num[5];     // 得到一个可以存放5个元素的整型数组

    // 使用下标索引, 访问每一个元素（格格）, 下标索引从0开始
    num[0] = 11;
    num[1] = 22;
    num[2] = 33;
    num[3] = 44;
    num[4] = 55;
    cout << "num数组的第一个元素是: " << num[0] << endl;
    cout << "num数组的第二个元素是: " << num[1] << endl;
    cout << "num数组的第三个元素是: " << num[2] << endl;
    cout << "num数组的第四个元素是: " << num[3] << endl;
    cout << "num数组的第五个元素是: " << num[4] << endl;
    cout << endl;

    // 数组的声明和赋值同步完成的快捷写法
    // 数据类型 数组名[] = {元素, ..., ..., ..., 元素, ...}
    int v[] = {11, 22, 33, 44, 55};
    cout << "v数组的第一个元素是: " << v[0] << endl;
    cout << "v数组的第二个元素是: " << v[1] << endl;
    cout << "v数组的第三个元素是: " << v[2] << endl;
    cout << "v数组的第四个元素是: " << v[3] << endl;
    cout << "v数组的第五个元素是: " << v[4] << endl;

    return 0;
}