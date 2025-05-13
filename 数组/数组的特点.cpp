#include "iostream"
using namespace std;

int main()
{
     // 特点1: 任意类型均可构建数组
     cout << "特点1: 任意类型均可构建数组--------" << endl;
     int v1[] = {1, 2, 3, 4, 5};
     float v2[] = {1.1, 1.2, 1.3, 1.4, 1.5};
     double v3[] = {1.1, 1.2, 1.3, 1.4, 1.5};
     char v4[] = {'a', 'b', 'c', 1, 2};
     string v5[] = {"小美", "小明", "小陈"};
     bool v6[] = {true, true, false, false};
     enum Color {RED, GREEN, BLUE};
     Color v7[] = {RED, GREEN, BLUE, BLUE};

     cout << "int数组的第一个元素: " << v1[0] << endl;
     cout << "float数组的第一个元素: " << v2[0] << endl;
     cout << "double数组的第一个元素: " << v3[0] << endl;
     cout << "char数组的第一个元素: " << v4[0] << endl;
     cout << "string数组的第一个元素: " << v5[0] << endl;
     cout << "bool数组的第一个元素: " << v6[0] << endl;
     cout << "枚举数组的第一个元素: " << v7[0] << endl;
     cout << endl;

     // 特点2: 固定大小（无边界检查）
     cout << "特点2: 固定大小（无边界检查）--------" << endl;
     int v8[] = {1, 2, 3, 4, 5};
//     cout << "访问v8的10号下标: " << v8[10] << endl;
//     v8[100] = 10;
     cout << endl;

     // 特点3: 内存连续且有序
     cout << "特点3: 内存连续且有序--------" << endl;
     cout << "v8数组的第一个元素是: " << v8[0] << endl;
     cout << "v8数组的第一个元素是: " << v8[0] << endl;
     cout << "v8数组的第一个元素是: " << v8[0] << endl;

     cout << "v8数组占用空间: " << sizeof(v8) << "字节" << endl;
     cout << "v8数组第一个元素占用空间: " << sizeof(v8[0]) << "字节" << endl;
     cout << "v8数组有几个元素: " << sizeof(v8)/sizeof(v8[0]) << endl;
     cout << endl;

     // 特点4: 元素值可以修改
     cout << "特点4: 元素值可以修改--------" << endl;
     int v9[] = {1, 2, 3, 4, 5, 6, 7};
     cout << "经过修改前, v9的下标0元素是: " << v9[0] << endl;
    cout << "经过修改前, v9的下标1元素是: " << v9[1] << endl;
    v9[0] = 11;
    v9[1] = 22;
    cout << "经过修改, v9的下标0元素是: " << v9[0] << endl;
    cout << "经过修改, v9的下标1元素是: " << v9[1] << endl;
    cout << endl;

    // 特定5: 数组变量本身不记录数据
    cout << "特点5: 数组变量本身不记录数据" << endl;
    int v10[] = {1, 2, 3, 4, 5, 6, 7};
    cout << "直接cout v10变量" << v10 << endl;
    // v10变量本身记录的是内存地址, 这个地址是v10的0号元素的地址

     return 0;
}